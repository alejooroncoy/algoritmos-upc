#include "PlanVacaciones.h"


PlanVacaciones::PlanVacaciones(string codigo, float precioBoleto, string nombreHotel, 
	float precioHotel, int dias, string nombre, int diaI, int diaF, int mesI, int mesF): 
	Boleto(codigo, precioBoleto), Hotel(nombreHotel, precioHotel, dias)
{
	this->nombre = nombre;
	this->diaI = diaI;
	this->diaF = diaF;
	this->mesI = mesI;
	this->mesF = mesF;
}

PlanVacaciones::~PlanVacaciones()
{
}

string PlanVacaciones::getNombre()
{
	return this->nombre;
}

int PlanVacaciones::getDiaI()
{
	return this->diaI;
}

int PlanVacaciones::getDiaF()
{
	return this->diaF;
}

int PlanVacaciones::getMesI()
{
	return this->mesI;
}

int PlanVacaciones::getMesF()
{
	return this->mesF;
}

void PlanVacaciones::setNombre(string nombre)
{
	this->nombre = nombre;
}

void PlanVacaciones::setDiaI(int diaI)
{
	this->diaI = diaI;
}

void PlanVacaciones::setDiaF(int diaF)
{
	this->diaF = diaF;
}

void PlanVacaciones::setMesI(int mesI)
{
	this->mesI = mesI;
}

void PlanVacaciones::setMesF(int mesF)
{
	this->mesF = mesF;
}
