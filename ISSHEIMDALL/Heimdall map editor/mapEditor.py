import pygame,sys,random, pickle, lueString
from pygame.locals import * 

WIDTH = 1280
HEIGHT = 850
BLACK = (0,0,0)
RED = (255,0,0)
WHITE = (255,255,255)
GREEN = (0,255,0)
BLUE = (0,0,255)


class Camera():
	def __init__(self, width,height):
		self.state = Rect(0,0,width,height)#self.state basically is the offset
		
	def apply(self, target):#Take the position of the planet and add the offset to blit it correctly
		return target.rect.move(self.state.topleft)
		
	def update(self, target):#Take the players position and change the offset accordingly
		self.state = self.camera_func(self.state, target)
	
	def camera_func(self, camera, target_rect):#sets the new pos for the camera
		left, top, _, _ = target_rect
		_, _, w, h = camera
		left, top, _, _ = -left, -top, w, h

		return Rect(left, top, w, h)


class MapEditor():
	
	def __init__(self):
		pygame.init()
		self.clock = pygame.time.Clock()
		pygame.display.set_mode((WIDTH,HEIGHT), pygame.RESIZABLE)
		pygame.display.set_caption("kamera testailuu")
		self.screen = pygame.display.get_surface()
		self.menu = pygame.Surface((80,600))
		self.menu.fill((140,140,140))
		self.menu_items = pygame.sprite.Group()
		self.PlanetSprites = pygame.sprite.Group()
		self.setupList = []
		self.spriteList = []
		self.allSprites = pygame.sprite.Group()
		self.player = Player(50)
		self.allSprites.add(self.player)
		self.font = pygame.font.SysFont(None, 36)
		self.lue = lueString.lue(self.screen, self.font,(WIDTH-500,HEIGHT-40)) 
		self.stepfont = pygame.font.SysFont("Arial", 16)
		self.normfont = pygame.font.SysFont("Arial", 26)
		self.controls = pygame.image.load("graphics/controls1.PNG").convert()
		self.controls.set_colorkey((255,255,255))
		self.camera = Camera(800,800)
		self.start_pos_set = False
		self.bgset= False
		self.bgfile = None
		self.scroll_step = 5
		
	def run(self):
		self.offset = Rect(1,1,WIDTH,HEIGHT)
		left = right = up = down = False
		rotate = onlyheight = onlywidth = False
		bgset = False
		while True:
			self.clock.tick(90)
			#Events
			
			for event in pygame.event.get():#Event handling
				if event.type == QUIT:
					pygame.quit()
					sys.exit(0)					
					#This part takes input and calls change_speed to move the player
				elif event.type == pygame.KEYDOWN:
					if event.key == pygame.K_LEFT:
						left = True
					elif event.key == pygame.K_RIGHT:
						right = True
					elif event.key == pygame.K_UP:
						up = True
					elif event.key == pygame.K_DOWN:
						down = True
					elif event.key == pygame.K_LALT:
						rotate = True
					elif event.key == pygame.K_s:
						self.save_map()
					elif event.key == pygame.K_l:
						self.clear()
						self.load_map()
					elif event.key == pygame.K_c:
						self.clear()
					elif event.key == pygame.K_F1:
						self.player.change_dimensions(50)
					elif event.key == pygame.K_F2:
						self.player.change_dimensions(100)
					elif event.key == pygame.K_F3:
						self.player.change_dimensions(150)
					elif event.key == pygame.K_F4:
						self.player.change_dimensions(200)
					elif event.key == pygame.K_F5:
						self.player.change_dimensions(300)
					elif event.key == pygame.K_F6:
						self.player.change_dimensions(450)
					elif event.key == pygame.K_F6:
						self.player.change_dimensions(600)
					elif event.key == pygame.K_0:
						self.player.change_type(0)
					elif event.key == pygame.K_1:
						self.player.change_type(1)
					elif event.key == pygame.K_2:
						self.player.change_type(2)
					elif event.key == pygame.K_3:
						self.player.change_type(3)
					elif event.key == pygame.K_KP_PLUS:	
						self.scroll_step += 1
						print("+step")
					elif event.key == pygame.K_KP_MINUS:	
						if not self.scroll_step < 2:
							self.scroll_step -= 1
							print("-step")
						
							#keyups
				elif event.type == pygame.KEYUP:
					if event.key == pygame.K_LEFT:
						left = False
					elif event.key == pygame.K_RIGHT:
						right = False
					elif event.key == pygame.K_UP:
						up = False
					elif event.key == pygame.K_DOWN:
						down = False
					elif event.key == pygame.K_LALT:
						rotate = False
							
							## MOUSE EVENTS
				elif event.type == pygame.MOUSEBUTTONDOWN:
					if event.dict["button"]==1:
						self.mouse1()
					elif event.dict["button"]==3:
						kill_list = pygame.sprite.spritecollide(self.player, self.PlanetSprites,True)
						for planet in kill_list:
							if planet.type == 0:
								self.start_pos_set = False
							self.spriteList.remove(planet)
							
					elif event.dict["button"]==4:#scrolling up
						self.player.change_size(self.scroll_step)
					elif event.dict["button"]==5:#scrolling down
						self.player.change_size(-self.scroll_step)
							
			self.move(left,right,up,down)
			self.camera.update(self.offset)			
			self.allSprites.update(self.offset.x, self.offset.y)
			self.screen.fill(BLACK)#Fill background with color (BLACK)
			if self.bgset:#If there is a background image set, blit it
				self.screen.blit(self.backgroundimg,(-self.offset.x,-self.offset.y))
			self.screen.blit(self.controls, (100,0))#Blit the controls to the screen
			
			for planet in self.spriteList:#Blit every sprite
				self.screen.blit(planet.image, self.camera.apply(planet))
			self.screen.blit(self.player.image, self.camera.apply(self.player))#blit player (mouse)
			if pygame.font:# Blit the text that shows the scroll_step
				step_text = self.stepfont.render("Scroll step: %d" %(self.scroll_step) ,2, (255, 255, 225))
				self.screen.blit(step_text, (WIDTH-100,16))
			pygame.display.flip()#update the screen
		
		pygame.quit()
	def set_scrollstep(self):
		self.lue.lue()	
		try:
			self.scroll_step = int(self.lue.getSana())
			if self.scroll_step < 1:
				self.scroll_step = 1
		except:
			print("Invalid input!")
	def mouse1(self):
		
		if self.player.type == 0 and self.start_pos_set:
			print("You can only have one starting position set, please remove the old one")
		elif not(self.player.collide(self.PlanetSprites)):
			planet = Planet(self.player.rect.center,self.player.get_radius(),self.player.type)
			self.PlanetSprites.add(planet)
			self.spriteList.append(planet)
			if self.player.type == 0:
				self.start_pos_set = True
			print("Uusi sprite!")
			
	def load_bg(self):
		self.lue.lue()
		self.bgfile = self.lue.getSana()
		try:
			self.backgroundimg = pygame.image.load("maps/"+self.bgfile).convert()
			self.self.bgfile = "maps/"+self.bgfile
			self.bgset= True
		except:
			print("Fuck meh!! Load failed")
		
		
	def save_map(self, filename="taso"):
		self.lue.lue()
		filename = self.lue.getSana()
		i = 0
		self.setupList = []
		for sprite in self.PlanetSprites:
			i += 1
			if sprite.save:
				self.setupList.append(sprite.get_data())
		if self.bgfile != None:
			self.setupList.append((self.bgfile,"bg"))
		try:
			f=open("../levels/"+filename, 'w')
			for item in self.setupList:
				f.write(item+'\n')
		except:
			print ("Unexpected error:", sys.exc_info()[0])
			print("Fuck meh!! Save failed")
		f.close()
		
			
	def load_map(self):
		
		self.lue.lue()
		filename = self.lue.getSana()
		try:
			with open("../levels/"+filename, 'rb') as f:
				self.setupList = f.read().splitlines()
		except:
			print("Fuck meh!! Load failed")
			return
				
		for setup in self.setupList:
			setup = str(setup)
			print(setup)
			if len(setup) < 3:
				print("ladataaan beegee")
				self.bgfile, type = setup
				self.backgroundimg = pygame.image.load(self.bgfile).convert_alpha()
				self.bgset = True
			else:
				setup = setup.replace("b","")
				setup = setup.replace("'","")
				setup = setup.split(";")
				print("Setup:  ",setup)
				x,y, radius, type, nothing = setup
				pos = int(x),int(y)
				planet = Planet(pos, int(radius), int(type)-1)
				self.PlanetSprites.add(planet)
				self.spriteList.append(planet)
		
		f.close()
		
	def clear(self):
		for sprite in self.PlanetSprites:
			self.PlanetSprites.remove(sprite)
			del sprite
		self.spriteList = []
		self.PlanetSprites.empty()
		self.setupList = []
		self.start_pos_set = False
		self.bgset = False
	def move(self,left,right,up,down):
		if left:
			self.offset.x -= 5
		if right:
			self.offset.x += 5
		if up:
			self.offset.y -=5
		if down:
			self.offset.y += 5
			
class Player(pygame.sprite.Sprite):

	def __init__(self, radius):
		pygame.sprite.Sprite.__init__(self)
		self.image = pygame.Surface([radius*2, radius*2])
		self.image.fill(BLUE)
		self.image.set_colorkey(BLUE)
		self.rect = self.image.get_rect()
		pygame.draw.ellipse(self.image, WHITE, self.rect)
		self.dimensions =(radius*2,radius*2)
		self.image.fill((255,0,0))
		self.image.set_colorkey((255,255,255))
		self.rect = self.image.get_rect()
		self.rect.x = 400
		self.rect.y = 300
		self.speedx = 0
		self.speedy = 0
		self.radius = radius
		self.rotation = 0
		self.type = 1
		self.change_type(1)
		
	def update(self,xoffset,yoffset):
		self.rect.center = pygame.mouse.get_pos()
		self.rect.x += xoffset 
		self.rect.y += yoffset 
		#self.check_type()
	
	def change_size(self, changeRadius):
		if self.type != 0 and self.type != 9:
			old_center = self.rect.center
			self.radius = self.radius+changeRadius
			if self.radius < 5:
				self.radius = 5
			self.image = pygame.Surface([self.radius*2, self.radius*2])
			self.rect = self.image.get_rect()
			self.rect.center = old_center
			self.change_type(self.type)
			
	def change_dimensions(self, radius):
		if self.type != 0 and self.type != 9:
			old_center = self.rect.center
			self.radius = radius
			self.image = pygame.Surface([self.radius*2, self.radius*2])
			self.rect = self.image.get_rect()
			self.rect.center = old_center
			self.change_type(self.type)
			
	def change_type(self,type):
		self.type = 1
		self.image.fill(BLUE)
		self.image.set_colorkey(BLUE)
		self.rect = self.image.get_rect()
		if type == 1:
			pygame.draw.ellipse(self.image, RED, self.rect)
		elif type == 2:
			pygame.draw.ellipse(self.image, WHITE, self.rect)
		elif type == 3:
			pygame.draw.ellipse(self.image, GREEN, self.rect)
		elif type == 0:
			pygame.draw.rect(self.image, GREEN, self.rect)
		else:
			pygame.draw.ellipse(self.image, RED, self.rect)
		self.type = type
	
	def get_radius(self):
		return (self.radius)
			
	def collide(self, planetSprites):
		hits = False;
		hit_list = pygame.sprite.spritecollide(self, planetSprites, False)
		if len(hit_list) > 0:
			hits = True
		return hits
		
	def remove_sprite(self, planetSprites):
		hits = False;
		hit_list = pygame.sprite.spritecollide(self, planetSprites, False)
		return hit_list

			
		
class Planet(pygame.sprite.Sprite):
	def __init__(self, pos, radius,type):
		pygame.sprite.Sprite.__init__(self)
		self.dimensions = radius*2, radius*2	
		self.radius = radius;
		self.x, self.y = pos;
		print("RADIUS: ",self.dimensions)
		self.image = pygame.Surface(self.dimensions)
		self.image.fill(BLUE)
		self.image.set_colorkey(BLUE)
		self.rect = self.image.get_rect()
		self.apply_texture(type);
		self.rect.center = pos
		self.type = type-1#FIX THIS (Types are 0,1,2 not 1,2,3... THis is a temporary solution)
		self.movx = 0
		self.movy = 0
		self.save = True;
		self.destroyable = False
		print("Added planet to  x:"+str(self.x)+"  y: "+str(self.y))
	
	def get_data(self):
		
		return str(str(self.x)+";"+str(self.y)+";"+str(int(self.radius))+";"+str(self.type)+";")
	def set_destroyable(self):
		if self.destroyable:
			self.destroyable = False
		else:
			self.destroyable = True

	def apply_texture(self, type):
		if type == 1:
			pygame.draw.ellipse(self.image, RED, self.rect, 2)
		elif type == 2:
			pygame.draw.ellipse(self.image, WHITE, self.rect, 2)
		elif type == 3:
			pygame.draw.ellipse(self.image, GREEN, self.rect, 2)
		elif type == 0:
			pygame.draw.rect(self.image, GREEN, self.rect)
		else:
			pygame.draw.ellipse(self.image, RED, self.rect, 2)
		
def main():
	MapEditor().run()
	
if __name__=="__main__":
	main()