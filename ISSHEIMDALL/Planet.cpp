#include "Planet.h"

#include "Enemy.h"


using namespace std;

std::vector<GLuint> Planet::planetTextures;
Planet::Planet(b2World* world, float x, float y, float radius, int status_)
{
	m_body = NULL;
	radius_ = radius/(float)PHYS_SCALE; //CONSISTENCY??
	b2BodyDef myBodyDef;
	myBodyDef.type = b2_staticBody;
	myBodyDef.position.Set(x /(float)PHYS_SCALE, y/(float)PHYS_SCALE);
	m_body = world->CreateBody(&myBodyDef);
	b2CircleShape circleShape;
	circleShape.m_radius = radius_;
	b2FixtureDef myFixtureDef;
	myFixtureDef.shape = &circleShape;
	myFixtureDef.density = 10;
	m_body->CreateFixture(&myFixtureDef);
	m_body->SetUserData(this);
	status = status_; //CONSISTENCY??
	start = Timer::get().getTime();
	type = Type::PLANET;
	resourceStart = Timer::get().getTime();
	shipCap = ceil(radius / 50.f);
	init(radius, 50);
	texID = planetTextures.at(rand() % 8);
	initVBO();
	posX = x;
	posY = y;
	rr = radius;
}


Planet::~Planet()
{
}

int Planet::init(){
	return 0;
}
int Planet::init(float r,float num_segments)
{
	m_dl = glGenLists(1);
	float theta = 2 * 3.1415926 / float(num_segments);
	float c = cosf(theta);//precalculate the sine and cosine
	float s = sinf(theta);
	float t;

	float x = r;//we start at angle = 0 
	float y = 0;
	glNewList(m_dl, GL_COMPILE);
	glBegin(GL_LINE_LOOP);
	for (int ii = 0; ii < num_segments; ++ii)
	{
		glVertex2f(x, y);//output vertex 

		//apply the rotation matrix
		t = x;
		x = c * x - s * y;
		y = s * t + c * y;
	}
	glEnd();
	glEndList();
	return (glGetError() == GL_NO_ERROR);
}
//Updating planets happens here. moving etc
void Planet::update()
{ 
	if (status != Status::PLAYER_OWNED)
		checkCapturing();
	if (status == Status::PLAYER_OWNED && Timer::get().getElapsedTime(resourceStart) > 5)
	{
		Player::get().addResources();
		resourceStart = Timer::get().getTime();
	}

	if (status == Status::HOSTILE)
		SpawnEnemies();

	
}
void Planet::checkCapturing()
{
	b2Vec2 PlayerPos = Player::get().getPosition();
	float dX, dY;
	dX = m_body->GetPosition().x * PHYS_SCALE - PlayerPos.x * PHYS_SCALE;
	dY = m_body->GetPosition().y * PHYS_SCALE - PlayerPos.y * PHYS_SCALE;
	float distance = sqrt(pow(dX, 2) + pow(dY, 2)) - (radius_ * PHYS_SCALE);
	
	if (distance < 245)
	{
		capturingProgress += 1.0 / 60.0;
		if (capturingProgress > 5)
		{
			++status;
			capturingProgress = 0;
			if (status > Status::PLAYER_OWNED)
			{
				cout << "ERROR!!!! Status cant be > 2, setting back to 2" << endl;
				status = Status::PLAYER_OWNED;
			}
		}

	}
	else if (capturingProgress > 0)
		capturingProgress -= 1.0 / 60.0;



}

void Planet::SpawnEnemies(){

		if (Timer::get().getElapsedTime(start) >= 15 &&
			enemies.size() < shipCap)
		{
			
			int randy1;
			
			int randy2;

			int randy3 = rand() % 5;
			if ((rand()%2) ==1)
				randy1 = 1;
			else
				randy1 = -1;
			if ((rand()%2) ==1)
				randy2 = 1;
			else
				randy2 = -1;
			FiringMode* mode;
			if (spawnCount > 8)
				mode = new FiringModeAuto();
			else if (spawnCount > 3)
				mode = new FiringModeBurst();
			else
				mode = new FiringModeSemi();
			
			
			
			Enemy* enemy = new Enemy(posX + (randy1*rr) + randy3, posY + (randy2*rr) + randy3, mode);
			enemy->setHomePlanet(this);
			std::cout << "pushing enemy to enemies list! " << std::endl;
			enemies.push_back(enemy);
			Render_List::get()->push_back(enemy);
			AI_List::get().push_back(enemy);
			enemy->init();
			++spawnCount;
			
			start = Timer::get().getTime();
		}
	
}

void Planet::shipDestroyed(Enemy* enemy)
{
	std::cout << "removing enemy from enemies list!! " << std::endl;
	enemies.remove(enemy);
}

int Planet::render()
{
		glMatrixMode(GL_MODELVIEW);
		b2Vec2 pos = m_body->GetPosition();
		glPushMatrix();
		//COLORS THE CIRCLE DEPENDING ON THE CURRENT STATUS OF THE PLANET
		//TODO? Move to its own method? 
		switch (status)
		{
		case Status::NEUTRAL:
			glColor3f(1, 1, 1);
			break;
		case Status::PLAYER_OWNED:
			glColor3f(0, 1, 0);
			break;
		case Status::HOSTILE:
			glColor3f(1, 0, 0);
			break;
		default:
			break;
		}
		glTranslatef(pos.x * (float)PHYS_SCALE, pos.y * (float)PHYS_SCALE, 0.0);
		glCallList(m_dl);
		glColor3f(1, 1, 1);
		//THIS HERE IS AN EXCEPTION.... WE DRAW TWO OBJECTS SO WE TRANSLATED ABOVE AND GIVE THIS POS 0,0
		renderVBO(0, 0, rr * 2, rr * 2, 0);
		glPopMatrix();
		if (capturingProgress > 0.25)
			DrawCapturingCircle();

		return 1;
	
}

b2Vec2 Planet::getPos()
{
	return m_body->GetPosition();
}

void Planet::DrawCapturingCircle()
{
	b2Vec2 pos = m_body->GetPosition();
	glPushMatrix();
	//COLORS THE CIRCLE DEPENDING ON THE CURRENT STATUS OF THE PLANER
	//TODO? Move to its own method? 
	switch (status)
	{
	case Status::NEUTRAL:
		glColor3f(0, 1, 0);
		break;
	case Status::PLAYER_OWNED:
		return;
		break;
	case Status::HOSTILE:
		glColor3f(1, 1, 1);
		break;
	default:
		break;
	}
	float scale = capturingProgress / 5;
	float tmpFix = 1 / scale;
	glScalef(scale,scale,1);
	glTranslatef(pos.x * (float)PHYS_SCALE*tmpFix, pos.y * (float)PHYS_SCALE*tmpFix, 0.0);
	glCallList(m_dl);
	glColor3f(1, 1, 1);
	glScalef(1, 1, 1);
	glPopMatrix();
}



void Planet::finish()
{

}
//loads the texture (?) for the planet
GLuint Planet::LoadTexturePNG(const char* file)
{
	GLuint textureID;
	SDL_Surface* Surface = IMG_Load(file);//loads image as surface
	if (Surface == NULL){
		std::cout << "ERROR: Loaded surface null! " << file << std::endl;
	}
	glGenTextures(1, &textureID);//generates texture (later we use TextureID to to tell what texture to use when rendering)
	glBindTexture(GL_TEXTURE_2D, textureID);//which texture do we use/modify etc now
	int Mode = GL_RGB;//RGB (red green blue)
	if (Surface->format->BytesPerPixel == 4){
		Mode = GL_RGBA;//(red green blue alpha)
	}
	int width = Surface->w;
	int height = Surface->h;
	//Make 2D texture. See https://www.opengl.org/sdk/docs/man3/xhtml/glTexImage2D.xml
	glTexImage2D(GL_TEXTURE_2D, 0, Mode, width, height, 0, Mode, GL_UNSIGNED_BYTE, Surface->pixels);
	//How texture behaves when the target area is smaller or bigger than texture (we strech or shrink texture linearly)
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	return textureID;
}

void Planet::initTextures()
{
	if (Planet::planetTextures.empty())
	{
		Planet::planetTextures.push_back(LoadTexturePNG("graphics/planets/planet1.png"));
		Planet::planetTextures.push_back(LoadTexturePNG("graphics/planets/planet2.png"));
		Planet::planetTextures.push_back(LoadTexturePNG("graphics/planets/planet3.png"));
		Planet::planetTextures.push_back(LoadTexturePNG("graphics/planets/planet4.png"));
		Planet::planetTextures.push_back(LoadTexturePNG("graphics/planets/planet5.png"));
		Planet::planetTextures.push_back(LoadTexturePNG("graphics/planets/planet6.png"));
		Planet::planetTextures.push_back(LoadTexturePNG("graphics/planets/planet7.png"));
		Planet::planetTextures.push_back(LoadTexturePNG("graphics/planets/planet8.png"));
	}
}
