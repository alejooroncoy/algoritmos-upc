#pragma once
#include "Encabezado.h"

class Hotel
{
protected:
	string nombre;
	float precio;
	int dias;

public:
	Hotel(string nombre = "", float precio = 0.0, int dias = 0);
	~Hotel();
	string getNombre();
	float getPrecioHotel();
	int getDias();
	void setNombre(string nombre);
	void setPrecioHotel(float precio);
	void setDias(int dias);
};

