#include "Cuadrado.h"

Cuadrado::Cuadrado()
{
	this->color = ConsoleColor(1 + rand() % 15);
	this->direccion = Derecha;
	this->x = this->y = 0;
}

Cuadrado::~Cuadrado()
{
}

void Cuadrado::borrar()
{
	Console::SetCursorPosition(this->x, this->y); cout << " ";
}

void Cuadrado::mover()
{
	if (this->direccion == Arriba) this->y--;
	if (this->direccion == Abajo) this->y++;
	if (this->direccion == Derecha) this->x++;
	if (this->direccion == Izquierda) this->x--;

	if (this->y == 0 && this->x == 0) this->direccion = Derecha;
	if (this->y == 0 && this->x == Console::WindowWidth - 1) this->direccion = Abajo;
	if (this->y == Console::WindowHeight - 1 && this->x == Console::WindowWidth - 1) this->direccion = Izquierda;
	if (this->y == Console::WindowHeight - 1 && this->x == 0) this->direccion = Arriba;
}

void Cuadrado::dibujar()
{
	Console::ForegroundColor = this->color;
	Console::SetCursorPosition(this->x, this->y); cout << char(219);
	Console::ForegroundColor = ConsoleColor::White;
}

void Cuadrado::cambiarColor()
{
	this->color = ConsoleColor(1 + rand() % 15);
}
