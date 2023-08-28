#include "Cuadrados.h"

Cuadrados::Cuadrados()
{
	this->cuadrados = nullptr;
	this->n = new int;
	*this->n = 0;
}

Cuadrados::~Cuadrados()
{
}

void Cuadrados::agregarCuadrado()
{
	Cuadrado** cuadradosTemporal = new Cuadrado * [*this->n + 1];
	for (int i = 0; i < *this->n; i++) {
		cuadradosTemporal[i] = this->cuadrados[i];
	}
	cuadradosTemporal[*this->n] = new Cuadrado();

	*this->n += 1;
	if (this->cuadrados != nullptr) delete this->cuadrados;
	this->cuadrados = cuadradosTemporal;
}

void Cuadrados::eliminarPrimerCuadrado()
{
	Cuadrado** cuadradosTemporal = new Cuadrado * [*this->n - 1];
	int aux = 0;
	for (int i = 0; i < *this->n; i++) {
		if (i != 0) cuadradosTemporal[i - aux] = this->cuadrados[i - aux];
		else {
			this->cuadrados[i]->borrar();
			aux += 1;
		}
	}

	*this->n -= 1;
	if (this->cuadrados != nullptr) delete this->cuadrados;
	this->cuadrados = cuadradosTemporal;
}

void Cuadrados::cambiarColoresDeLosCuadrados()
{
	for (int i = 0; i < *this->n; i++) {
		this->cuadrados[i]->cambiarColor();
	}
}

void Cuadrados::mostrar()
{
	for (int i = 0; i < *this->n; i++) {
		this->cuadrados[i]->borrar();
		this->cuadrados[i]->mover();
		this->cuadrados[i]->dibujar();
	}
	_sleep(10);
}

