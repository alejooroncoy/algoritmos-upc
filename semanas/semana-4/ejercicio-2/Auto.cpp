#include "Auto.h"


Auto::Auto()
{
}

Auto::~Auto()
{
	delete this->llantaSI;
	delete this->llantaSD;
	delete this->llantaII;
	delete this->llantaID;
	delete this->chasis;
}

Auto::Auto(int x, int y, ConsoleColor color)
{
	this->dx = 1 + rand() % 3 + float(rand()) / float(RAND_MAX);
	this->llantaSI = new Llanta(x, y-2, this->dx, color);
	this->llantaSD = new Llanta(x, y + 2, this->dx, color);
	this->llantaII = new Llanta(x + 3, y - 2, this->dx, color);
	this->llantaID = new Llanta(x + 3, y + 2, this->dx, color);
	this->chasis = new Chasis(x, y, this->dx, color);
	this->x = x;
	this->y = y;
	this->color = color;
}

int Auto::getX()
{
	return this->x;
}

int Auto::getY()
{
	return this->y;
}

ConsoleColor Auto::getColor()
{
	return this->color;
}

int Auto::getDx()
{
	return this->dx;
}

void Auto::setX(int x)
{
	this->x = x;
}

void Auto::setY(int y)
{
	this->y = y;
}

void Auto::setColor(ConsoleColor color)
{
	this->color = color;
}

void Auto::setDx(int dx)
{
	this->dx = dx;
}

void Auto::dibujar()
{
	this->llantaSI->dibujar();
	this->llantaSD->dibujar();
	this->llantaII->dibujar();
	this->llantaID->dibujar();
	this->chasis->dibujar();
}

void Auto::borrar()
{
	this->llantaSI->borrar();
	this->llantaSD->borrar();
	this->llantaII->borrar();
	this->llantaID->borrar();
	this->chasis->borrar();
}


void Auto::mover()
{
	this->llantaSI->mover();
	this->llantaSD->mover();
	this->llantaII->mover();
	this->llantaID->mover();
	this->chasis->mover();
}

bool Auto::enMeta()
{
	bool ganaCarrera = false;
	if (this->chasis->getX() + 8 > Console::WindowWidth)
		ganaCarrera = true;
	return ganaCarrera;
}
