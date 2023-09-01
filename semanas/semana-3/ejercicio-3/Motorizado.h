#pragma once
#include "encabezados.h"


class Motorizado
{
private:
	string nombre, apellido, placa, empresa;
	float kilometraje;

public:
	Motorizado();
	Motorizado(string nombre, string apellido, string placa, string empresa, float kilometraje);
	~Motorizado();

	string getNombre();
	string getApellido();
	string getPlaca();
	string getEmpresa();
	float getKilometraje();
	void setNombre(string nombre);
	void setApellido(string apeliido);
	void setPlaca(string placa);
	void setEmpresa(string empresa);
	float setKilometraje(float kilometraje);
	float precio();
};

