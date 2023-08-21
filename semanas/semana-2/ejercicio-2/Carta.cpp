#include "Carta.h"

Carta::Carta()
{
	this->platos = nullptr;
	this->n = nullptr;
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
	if (this->n == nullptr) {
		this->n = new int;
		*this->n = 0;
	};
	Plato** platosTemporal = new Plato*[*this->n + 1];
	
	for (int i = 0; i < *this->n; i++) {
		platosTemporal[i] = platos[i];
	}
	platosTemporal[*this->n] = plato;

	this->platos = platosTemporal;
}

Plato* Carta::modificarPlato(int pos)
{
	return nullptr;
}

void Carta::eliminarPlato(int pos)
{
}

Plato* Carta::getPlato(int pos)
{
	return nullptr;
}

int Carta::getN()
{
	return 0;
}
