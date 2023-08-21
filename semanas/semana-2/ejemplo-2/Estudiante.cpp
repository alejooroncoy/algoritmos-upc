#include "Estudiante.h"


Estudiante::Estudiante()
{
	this->nombre = "";
	this->edad = 0;
	this->genero = ' ';
	this->pc = nullptr;
}

Estudiante::Estudiante(string nombre,
	int edad, char genero, PC* pc)
{
	this->nombre = nombre;
	this->edad = edad;
	this->genero = genero;
	this->pc = pc;
}

Estudiante::~Estudiante()
{
	delete this->pc;	
}

string Estudiante::mostrarDatos()
{
	string resultado = "";
	resultado += "\nNombre: " + this->nombre + "\n";
	resultado += "Edad: " + std::to_string(this->edad) + "\n";
	resultado += "Genero: " + string(1, this->genero) + "\n";
	return resultado;
}
