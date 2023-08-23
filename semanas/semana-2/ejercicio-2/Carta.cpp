#include "Carta.h"

Carta::Carta()
{
	this->platos = nullptr;
	this->n = new int;
	*this->n = 0;
}

Carta::~Carta()
{
	delete this->n;
	this->n = nullptr;
	delete this->platos;
	this->platos = nullptr;
}

void Carta::addPlatos(Plato* plato)
{
	Plato** platosTemporal = new Plato * [*this->n + 1];

	for (int i = 0; i < *this->n; i++) platosTemporal[i] = platos[i];
	
	platosTemporal[*this->n] = plato;

	*this->n += 1;
	if (platos != nullptr) delete platos;
	this->platos = platosTemporal;
}

Plato* Carta::modificarPlato(int pos)
{
	return this->platos[pos];
}

void Carta::eliminarPlato(int pos)
{
	Plato** platosTemporal = new Plato * [*this->n - 1];

	int p = 0;
	for (int i = 0; i < *this->n; i++) {
		if (i != pos) platosTemporal[i + p] = platos[i];
		else p -= 1;
	};

	*this->n -= 1;
	if (platos != nullptr) delete platos;
	this->platos = platosTemporal;
}

Plato* Carta::getPlato(int pos)
{
	return this->platos[pos];
}

int Carta::getN()
{
	return *this->n;
}
