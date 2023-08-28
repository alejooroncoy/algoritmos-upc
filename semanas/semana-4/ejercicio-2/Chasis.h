#pragma once
#include "encabezados.h"

class Chasis
{
private:
	int x, y, dx;
	ConsoleColor color;
	string forma;

public:
	Chasis();
	~Chasis();
	Chasis(int x, int y, int dx,ConsoleColor color);
	int getX();
	int getY();
	string getForma();
	ConsoleColor getColor();
	int getDx();
	void setX(int x);
	void setY(int y);
	void setColor(ConsoleColor color);
	void setDx(int dx);
	void setForma(string forma);
	void dibujar();
	void borrar();
	void mover();
};


