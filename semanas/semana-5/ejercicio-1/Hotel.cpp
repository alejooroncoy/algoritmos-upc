#include "Hotel.h"


Hotel::Hotel(string nombre, float precio, int dias)
{
    this->nombre = nombre;
    this->precio = precio;
    this->dias = dias;
}

Hotel::~Hotel()
{
}

string Hotel::getNombre()
{
    return this->nombre;
}

float Hotel::getPrecioHotel()
{
    return this->precio;
}

int Hotel::getDias()
{
    return this->dias;
}

void Hotel::setNombre(string nombre)
{
    this->nombre = nombre;
}

void Hotel::setPrecioHotel(float precio)
{
    this->precio = precio;
}

void Hotel::setDias(int dias)
{
    this->dias = dias;
}
