#pragma once
#include "Motorizado.h"
#include "vector"

enum TipoDeFiltrado {
	Mapi,
	Globo,
};

class ListaMotorizados
{
private:
	vector<Motorizado *>* motorizados;

public:
	ListaMotorizados();
	~ListaMotorizados();
	void agregarMotorizado(Motorizado* motorizado);
	void eliminarMotorizado(int pos);
	Motorizado* getMotorizado(int pos);
	string filtrarMotorizados(TipoDeFiltrado tipoDeFiltrado);
	string toString();
	int getN();
};

