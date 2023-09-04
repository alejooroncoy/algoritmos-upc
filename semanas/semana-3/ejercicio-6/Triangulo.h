#pragma once
#include "Encabezados.h"

enum TipoDeTriangulo {
	Equilatero,
	Rectangulo
};

class Triangulo
{
private:
	int lado1, lado2, x, y, dx, dy;
	TipoDeTriangulo tipo;
	char caracter;

public:
	Triangulo();
	Triangulo(TipoDeTriangulo tipo, char caracter = ' ', int lado1 = 0, int lado2 = 0);
	void generarFigura();
	~Triangulo();

};



