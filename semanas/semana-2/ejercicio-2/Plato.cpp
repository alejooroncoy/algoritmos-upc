#include "Plato.h"


Plato::Plato()
{
	this->nombre = "";
	this->estado = 0;
	this->tipo = ' ';
	this->precio = 0.0;
	this->calorias = 0.0;
}

Plato::Plato(string nombre, short estado, char tipo, float precio, float calorias) {
	this->nombre = nombre;
	this->estado = estado;
	this->tipo = tipo;
	this->precio = precio;
	this->calorias = calorias;
};

Plato::~Plato()
{
}

string Plato::getNombre()
{
	return this->nombre;
}

short Plato::getEstado()
{
	return this->estado;
}

char Plato::getTipo()
{
	return this->tipo;
}

float Plato::getPrecio()
{
	return this->precio;
}

float Plato::getCalorias()
{
	return calorias;
}

void Plato::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Plato::setEstado(short estado)
{
	this->estado = estado;
}

void Plato::setTipo(char tipo)
{
	this->tipo = tipo;
}

void Plato::setPrecio(float precio)
{
	this->precio = precio;
}

void Plato::setCalorias(float calorias)
{
	this->calorias = calorias;
}
