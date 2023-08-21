#include "Libro.h"

Libro::Libro()
{
	this->titulo = "";
	this->autor = nullptr;
}

Libro::Libro(string tit, Autor* autor)
{
	this->titulo = tit;
	this->autor = autor;
}

Libro::~Libro()
{
}

string Libro::mostrarDatos()
{
	string resultado = "";

	resultado += "Titulo: " + this->titulo + "\n";
	resultado += "Datos del autor: \n" 
		+ this->autor->mostrarDatos();
	return resultado;
}
