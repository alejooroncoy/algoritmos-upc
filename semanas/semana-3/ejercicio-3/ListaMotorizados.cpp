#include "ListaMotorizados.h"

string toLower(string texto) {
	string nuevoTexto = "";
	for (int i = 0; i < texto.size(); i++) {
		nuevoTexto += tolower(texto[i]);
	}
	return nuevoTexto;
}

ListaMotorizados::ListaMotorizados()
{
	this->motorizados = new vector<Motorizado*>();
}

ListaMotorizados::~ListaMotorizados()
{
	delete this->motorizados;
}

void ListaMotorizados::agregarMotorizado(Motorizado* motorizado)
{
	this->motorizados->push_back(motorizado);
}

void ListaMotorizados::eliminarMotorizado(int pos)
{
	this->motorizados->erase(this->motorizados->begin() + pos);
}

Motorizado* ListaMotorizados::getMotorizado(int pos)
{
	return this->motorizados->at(pos);
}

string ListaMotorizados::filtrarMotorizados(TipoDeFiltrado tipoDeFiltrado)
{
	string resultado = "";
	for (int i = 0; i < this->motorizados->size(); i++) {
		if (tipoDeFiltrado == TipoDeFiltrado::Globo
			&& toLower(this->motorizados->at(i)->getEmpresa()) == "globo" ||
			tipoDeFiltrado == TipoDeFiltrado::Mapi
			&& toLower(this->motorizados->at(i)->getEmpresa()) == "mapi"
			) {
			resultado += this->motorizados->at(i)->getNombre() + "\t";
			resultado += this->motorizados->at(i)->getApellido() + "\t\t";
			resultado += this->motorizados->at(i)->getPlaca() + "\t";
			resultado += this->motorizados->at(i)->getEmpresa() + "\t";
			resultado += to_string(this->motorizados->at(i)->getKilometraje()) + "\t";
			resultado += to_string(this->motorizados->at(i)->precio()) + "\n";
		}
	}
	return resultado;
}

string ListaMotorizados::toString()
{
	string resultado = "";
	for (int i = 0; i < this->motorizados->size(); i++) {
		resultado +=  this->motorizados->at(i)->getNombre() + "\t";
		resultado +=  this->motorizados->at(i)->getApellido() + "\t\t";
		resultado +=  this->motorizados->at(i)->getPlaca() + "\t";
		resultado +=  this->motorizados->at(i)->getEmpresa() + "\t";
		resultado +=  to_string(this->motorizados->at(i)->getKilometraje()) + "\t";
		resultado +=  to_string(this->motorizados->at(i)->precio()) + "\n";
	}
	return resultado;
}

int ListaMotorizados::getN()
{
	return this->motorizados->size();
}
