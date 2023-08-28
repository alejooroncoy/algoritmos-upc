#include "Llanta.h"

Llanta::Llanta()
{
	this->x = 0;
	this->y = 0;
	this->color = ConsoleColor::White;
}

Llanta::Llanta(int x, int y, int dx, ConsoleColor color)
{
	this->x = x;
	this->y = y;
	this->color = color;
	this->dx = dx;
}


Llanta::~Llanta()
{
}

int Llanta::getX()
{
	return this->x;
}

int Llanta::getY()
{
	return this->y;
}

ConsoleColor Llanta::getColor()
{
	return this->color;
}

int Llanta::getDx()
{
	return this->dx;
}

void Llanta::setX(int x)
{
	this->x = x;
}

void Llanta::setY(int y)
{
	this->y = y;
}

void Llanta::setColor(ConsoleColor color)
{
	this->color = color;
}

void Llanta::setDx(int dx)
{
	this->dx = dx;
}

void Llanta::dibujar()
{
	Console::ForegroundColor = this->color;
	Console::SetCursorPosition(this->x, this->y); cout << char(223);
	Console::ForegroundColor = ConsoleColor::White;
}

void Llanta::borrar()
{
	Console::SetCursorPosition(this->x, this->y); cout << " ";
}

void Llanta::mover()
{
	this->x += this->dx;
}

