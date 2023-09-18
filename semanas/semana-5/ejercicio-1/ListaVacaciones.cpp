#include "ListaVacaciones.h"

ListaVacaciones::ListaVacaciones()
{
}

ListaVacaciones::~ListaVacaciones()
{
}

void ListaVacaciones::agregarPlan(PlanVacaciones* planVacaciones)
{
	this->planesVacaciones->push_back(planVacaciones);
}

PlanVacaciones* ListaVacaciones::obtenerPlan(int pos)
{
	return this->planesVacaciones->at(pos);
}

void ListaVacaciones::eliminarPlan(int pos)
{
	this->planesVacaciones->erase(this->planesVacaciones->begin(),
		this->planesVacaciones->begin() + pos);
}

float ListaVacaciones::calcularCosto(int pos)
{
	PlanVacaciones* plan = this->planesVacaciones->at(pos);
	return plan->getPrecioBoleto() + plan->getPrecioBoleto() * plan->getDias();
}

string ListaVacaciones::reporteIntervalorFecha(int dia, int mesi, int diaF, int mesF)
{
	string resultado = "";
	resultado += "Plan\tFecha\techaFin\n";
}

string ListaVacaciones::reporteHotel(int pos)
{
}

int ListaVacaciones::getN(int pos)
{
	return this->planesVacaciones->size()
}
