#pragma once
#include "Encabezados.h"

class Ovni
{
protected:
	int x, y, dy, ancho, alto;
	ConsoleColor color;

public:
	Ovni(int x = 0, int y = 0, int ancho = 0, int alto = 0,
		int dy = rand() % 5 + 1, ConsoleColor color = ConsoleColor(rand() % 15 + 1));
	~Ovni();
	int getX();
	int getY();
	int getDy();
	int getAncho();
	int getAlto();
	ConsoleColor getColor();
	void setX(int x);
	void setY(int y);
	void setDy(int dy);
	void setAncho(int ancho);
	void setAlto(int alto);
	void setColor(ConsoleColor color);
	void setColor(int color);
	void mover();
	void borrar();
	virtual void pintar() {};
};



