#pragma once
#include "string"
#include "Proveedor.h"

using namespace std;

class Producto
{
private:
	string id, nombre;
	char tipo, categoria;
	int cantidad;
	double precio;
	Proveedor* proveedor;

public:
	Producto();
	~Producto();
};

