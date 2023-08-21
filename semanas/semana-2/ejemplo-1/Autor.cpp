#include "Autor.h"

Autor::Autor()
{
	this->nombre = "";
	this->apellido = "";
	this->pais = "";
}

Autor::Autor(string nom, string ape, string pais)
{
	this->nombre = nom;
	this->apellido = ape;
	this->pais = pais;
}

Autor::~Autor()
{
}

string Autor::mostrarDatos()
{
	string datos = "";
	datos += "Nombre: " + this->nombre + "\n";
	datos += "Apellido: " + this->apellido + "\n";
	datos += "Pais: " + this->pais + "\n";

	return datos;
}
