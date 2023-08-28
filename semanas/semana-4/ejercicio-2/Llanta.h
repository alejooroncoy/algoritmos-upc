#pragma once
#include "encabezados.h"

class Llanta
{
private:
	int x, y, dx;
	ConsoleColor color;

public:
	Llanta();
	Llanta(int x, int y, int dx, ConsoleColor color);
	~Llanta();
	int getX();
	int getY();
	ConsoleColor getColor();
	int getDx();
	void setX(int x);
	void setY(int y);
	void setColor(ConsoleColor color);
	void setDx(int dx);
	void dibujar();
	void borrar();
	void mover();
};
