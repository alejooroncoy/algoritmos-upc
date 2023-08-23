#include "Fecha.h"

Fecha::Fecha()
{
	this->dia = 0;
	this->mes = "";
	this->ano = 0;
}

Fecha::Fecha(int dia, string mes, int ano)
{
	this->dia = dia;
	bool todosNumeros = true;
	for (int i = 0; i < mes.length(); i++) {
		if (!isalnum(mes[i])) {
			todosNumeros = false;
			break;
		}
	}
	this->mes = todosNumeros ? Fecha::mesToString(stoi(mes)) : mes;
	this->ano = ano;
}

Fecha::Fecha(int dia, int mes, int ano)
{
	this->dia = dia;
	this->mes = this->mesToString(mes);
	this->ano = ano;
}

Fecha::~Fecha()
{
}

int Fecha::getDia()
{
	return this->dia;
}

string Fecha::getMes()
{
	return this->mes;
}

int Fecha::getAno()
{
	return this->ano;
}

void Fecha::setDia(int dia)
{
	this->dia = dia;
}

void Fecha::setMes(string mes)
{
	this->mes = mes;
}

void Fecha::setMes(int mes)
{
	this->mes = this->mesToString(mes);
}

string Fecha::mesToString(int mes) {
	string meses[12] = { "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
		"Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre" };
	return meses[mes - 1];
}

void Fecha::setAno(int ano)
{
	this->ano = ano;
}

string Fecha::toString()
{
	string resultado = "";
	resultado += to_string(this->dia) + " de ";
	resultado += this->mes + " del ";
	resultado += to_string(this->ano);
	return resultado;
}

