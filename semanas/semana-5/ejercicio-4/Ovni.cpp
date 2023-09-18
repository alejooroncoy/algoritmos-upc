#include "Ovni.h"

Ovni::Ovni(int x, int y, int ancho, int alto, int dy, ConsoleColor color)
{
	this->x = x;
	this->y = y;
	this->dy = dy;
	this->ancho = ancho;
	this->alto = alto;
	this->color = color;
}

Ovni::~Ovni()
{
}

int Ovni::getX()
{
	return this->x;
}

int Ovni::getY()
{
	return this->y;
}

int Ovni::getDy()
{
	return this->dy;
}

int Ovni::getAncho()
{
	return this->ancho;
}

int Ovni::getAlto()
{
	return this->alto;
}

ConsoleColor Ovni::getColor()
{
	return this->color;
}

void Ovni::setX(int x)
{
	this->x = x;
}

void Ovni::setY(int y)
{
	this->y = y;
}

void Ovni::setDy(int dy)
{
	this->dy = dy;
}

void Ovni::setAncho(int ancho)
{
	this->ancho = ancho;
}

void Ovni::setAlto(int alto)
{
	this->alto = alto;
}

void Ovni::setColor(ConsoleColor color)
{
	this->color = color;
}

void Ovni::setColor(int color)
{
	this->color = ConsoleColor(color);
}

void Ovni::mover()
{
	if (this->y + this->dy + this->alto >= Console::WindowHeight ||
		this->y + this->dy <= 0
		) this->dy *= -1;

	this->y += this->dy;
}

void Ovni::borrar()
{
	for (int i = 0; i < this->alto; i++) {
		for (int j = 0; j < this->ancho; j++) {
			Console::SetCursorPosition(this->x + j, this->y + i);
			cout << " ";
		}
	}
}
