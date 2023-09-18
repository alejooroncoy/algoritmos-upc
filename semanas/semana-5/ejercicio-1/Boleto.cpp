#include "Boleto.h"

Boleto::Boleto(string codigo, float precio)
{
	this->codigo = "";
	this->precio = 0.0;
}

Boleto::~Boleto()
{
}

string Boleto::getCodigo()
{
	return this->codigo;
}

void Boleto::setCodigo(string codigo)
{
	this->codigo = codigo;
}

float Boleto::getPrecioBoleto()
{
	return this->precio;
}

void Boleto::setPrecioBoleto(float precio)
{
	this->precio = precio;
}
