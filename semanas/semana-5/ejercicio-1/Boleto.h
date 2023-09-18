#pragma once
#include "Encabezado.h"

class Boleto
{
protected:
	string codigo;
	float precio;
public:
	Boleto(string codigo = "", float precio = 0.0);
	~Boleto();
	string getCodigo();
	void setCodigo(string codigo);
	float getPrecioBoleto();
	void setPrecioBoleto(float precio);

};


