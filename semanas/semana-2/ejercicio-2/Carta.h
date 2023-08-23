#pragma once
#include "Plato.h"

class Carta
{
private:
	Plato** platos;
	int* n;

public:
	Carta();
	~Carta();
	void addPlatos(Plato* plato);
	Plato* modificarPlato(int pos);
	void eliminarPlato(int pos);
	Plato* getPlato(int pos);
	int getN();
	string toString();
};

