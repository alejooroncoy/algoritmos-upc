#pragma once
#include "Boleto.h"
#include "Hotel.h"

class PlanVacaciones: public Boleto, public Hotel
{
private:
	string nombre;
	int diaI, diaF, mesI, mesF;

public:
	PlanVacaciones(string codigo = "", float precioBoleto = 0.0,
		string nombreHotel = "", float precioHotel = 0.0, int dias = 0, string nombre = "", int diaI = 0,
		int diaF = 0, int mesI = 0, int mesF = 0);
	~PlanVacaciones();
	string getNombre();
	int getDiaI();
	int getDiaF();
	int getMesI();
	int getMesF();
	void setNombre(string nombre);
	void setDiaI(int diaI);
	void setDiaF(int diaF);
	void setMesI(int mesI);
	void setMesF(int mesF);
};



