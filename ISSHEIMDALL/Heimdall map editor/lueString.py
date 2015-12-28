#http://www.asciitable.com/


import pygame, string,sys
from pygame.locals import *

class lue():
	def __init__(self, screen_, font_, pos_=(0,0)):
		pygame.init()
		#windowSurfaceObj = pygame.display.set_mode((200,200),pygame.RESIZABLE)
		self.screen = screen_
		self.pos = pos_
		print(self.pos)
		self.font = font_
		self.sana = "";
		self.shift = False
		self.txtSurface = pygame.Surface((500,40))
	def lue(self):
		
		while True:
			self.txtSurface.fill((69,69,69))
			textField = self.font.render(self.sana ,2, (0, 255, 0))
			self.txtSurface.blit(textField, (0,0))
			self.screen.blit(self.txtSurface,self.pos)
			pygame.display.flip()
			
			for event in pygame.event.get():
				if event.type == QUIT:
					print(self.sana)
					sys.exit(0)
				
						
					
				elif event.type == pygame.KEYDOWN:
					if event.key == pygame.K_RSHIFT or event.key == pygame.K_LSHIFT:
						self.shift = True
						
					elif event.key > 31 and event.key < 160 and event.key != 127:
						if self.shift:
							print((int(event.key)-32))
							self.sana +=(chr(int(event.key)-32))
							print(chr(int(event.key)-32))
						else:
							self.sana +=(chr(event.key))
							print(chr(event.key))
							
					elif event.key == 8:
						self.sana = self.sana[:-1]
						print(self.sana)
						
					elif event.key == pygame.K_ESCAPE:
						print(self.sana)
						return					
						
					elif event.key == pygame.K_RETURN:
						print(self.sana)
						return
						
				elif event.type == pygame.KEYUP:
					if event.key == pygame.K_RSHIFT or event.key == pygame.K_LSHIFT:
						self.shift = False
				
		#sys.exit(0)	
	
	def getSana(self):
		return self.sana
def main():
	lue.lue()
	
if __name__=="__main__":
	main()
		