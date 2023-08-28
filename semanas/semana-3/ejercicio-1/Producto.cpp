#include "Producto.h"

Producto::Producto()
{
	this->id = "";
	this->nombre = "";
	this->tipo = ' ';
	this->categoria = ' ';
	this->cantidad = 0;
	this->precio = 0;
	this->proveedor = nullptr;
}

Producto::~Producto()
{
}
