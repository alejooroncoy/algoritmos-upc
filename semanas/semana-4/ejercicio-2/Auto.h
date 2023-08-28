#pragma once
#include "encabezados.h"
#include "Llanta.h"
#include "Chasis.h"

class Auto
{
private:
	int x, y, dx;
	Llanta* llantaSI;
	Llanta* llantaSD;
	Llanta* llantaII;
	Llanta* llantaID;
	Chasis* chasis;
	ConsoleColor color;

public:
	Auto();
	~Auto();
	Auto(int x, int y, ConsoleColor color);
	int getX();
	int getY();
	int getDx();
	ConsoleColor getColor();
	void setX(int x);
	void setY(int y);
	void setColor(ConsoleColor color);
	void setDx(int d);
	void dibujar();
	void borrar();
	void mover();
	bool enMeta();

};



