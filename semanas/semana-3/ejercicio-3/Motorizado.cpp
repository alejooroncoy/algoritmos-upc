#include "Motorizado.h"

Motorizado::Motorizado()
{
	this->nombre = "";
	this->apellido = "";
	this->placa =  "";
	this->empresa = "";
	this->kilometraje = 0.0;
}

Motorizado::Motorizado(string nombre = "", string apellido = "", string placa = "", string empresa = "", float kilometraje = 0.0)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->placa = placa;
	this->empresa = empresa;
	this->kilometraje = kilometraje;
}

Motorizado::~Motorizado()
{

}

string Motorizado::getNombre()
{
	return this->nombre;
}

string Motorizado::getApellido()
{
	return this->apellido;
}

string Motorizado::getPlaca()
{
	return this->placa;
}

string Motorizado::getEmpresa()
{
	return this->empresa;
}

float Motorizado::getKilometraje()
{
	return this->kilometraje;
}

void Motorizado::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Motorizado::setApellido(string apeliido)
{
	this->apellido = apellido;
}

void Motorizado::setPlaca(string placa)
{
	this->placa = placa;
}

void Motorizado::setEmpresa(string empresa)
{
	this->empresa = empresa;
}

float Motorizado::setKilometraje(float kilometraje)
{
	return this->kilometraje;
}

float Motorizado::precio()
{
	return 1.5 * this->kilometraje;
}
