#pragma once
#include "Autor.h"

class Libro
{
private:
	Autor* autor;
	string titulo;

public:
	Libro();
	Libro(string tit, Autor* autor);
	~Libro();
	string mostrarDatos();

};


