#pragma once
#include "iostream"
#include "string.h"
#include "PC.h"

using namespace std;

class Estudiante
{
private:	
	string nombre;
	int edad;
	char genero;
	PC* pc;

public:
	Estudiante();
	Estudiante(string nombre, int edad,
		char genero, PC* pc);
	~Estudiante();
	string mostrarDatos();
};

