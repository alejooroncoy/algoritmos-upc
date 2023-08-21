#pragma once
#include "string.h"
#include "iostream"

using namespace System;
using namespace std;

class Autor
{
private:
	string nombre, apellido, pais;

public:
	Autor();
	Autor(string nom, string ape, string pais);
	~Autor();
	string mostrarDatos();
};

