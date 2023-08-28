#pragma once
#include "encabezados.h"
#define ANCHO 80
#define ALTO 40

enum Direccion {
	Arriba,
	Abajo,
	Izquierda, Derecha
};

class Cuadrado
{
private:
	int x, y;
	Direccion direccion;
	ConsoleColor color;

public:
	Cuadrado();
	~Cuadrado();
	void borrar();
	void mover();
	void dibujar();
	void cambiarColor();

};



