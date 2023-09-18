#pragma once
#include "PlanVacaciones.h"

class ListaVacaciones
{
private:
	vector<PlanVacaciones*>* planesVacaciones;

public:
	ListaVacaciones();
	~ListaVacaciones();
	void agregarPlan(PlanVacaciones* planVacaciones);
	PlanVacaciones* obtenerPlan(int pos);
	void eliminarPlan(int pos);
	float calcularCosto(int pos);
	string reporteIntervalorFecha(int dia, int mesi, int diaF, int mesF);
	string reporteHotel(int pos);
	int getN(int pos);
};


