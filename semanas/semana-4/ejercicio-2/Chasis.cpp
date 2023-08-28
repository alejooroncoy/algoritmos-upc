#include "Chasis.h"

Chasis::Chasis()
{
	this->x = 0;
	this->y = 0;
	this->dx = 0;
	this->forma = string(1, 219) + string(1, 219) 
				+ string(1, 219) + string(1, 219) 
				+ string(1, 219)+ string(1, 219);
}

Chasis::~Chasis()
{
}

Chasis::Chasis(int x, int y, int dx, ConsoleColor color)
{
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->color = color;
}

int Chasis::getX()
{
	return this->x;
}

int Chasis::getY()
{
	return this->y;
}

string Chasis::getForma()
{
	return this->forma;
}

ConsoleColor Chasis::getColor()
{
	return this->color;
}

int Chasis::getDx()
{
	return this->dx;
}

void Chasis::setX(int x)
{
	this->x = x;
}

void Chasis::setY(int y)
{
	this->y = y;
}

void Chasis::setColor(ConsoleColor color)
{
	this->color = color;
}

void Chasis::setDx(int dx)
{
	this->dx = dx;
}

void Chasis::setForma(string forma)
{
	this->forma = forma;
}

void Chasis::dibujar()
{
	Console::ForegroundColor = this->color;
	Console::SetCursorPosition(this->x, this->y); cout << char(220) << char(220) << char(220) << char(220) << char(220) << char(220);
	Console::ForegroundColor = ConsoleColor::White;
}

void Chasis::borrar()
{
	Console::SetCursorPosition(this->x, this->y); cout << "      ";

}

void Chasis::mover()
{
	this->x += this->dx;
}
