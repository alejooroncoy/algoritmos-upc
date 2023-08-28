#pragma once
#include "string"
#include "Producto.h"
#define ll long long

using namespace std;

class Proveedor
{
private:
	string RUC, razonSocial, direccion;
	ll telefono;
	Producto** productos;
public:
	Proveedor();
	~Proveedor();
};

