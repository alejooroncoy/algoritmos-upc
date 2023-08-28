#pragma once
#include "Cuadrado.h"

class Cuadrados
{
private:
	Cuadrado** cuadrados;
	int* n;
public:
	Cuadrados();
	~Cuadrados();
	void agregarCuadrado();
	void eliminarPrimerCuadrado();
	void cambiarColoresDeLosCuadrados();
	void mostrar();
};



