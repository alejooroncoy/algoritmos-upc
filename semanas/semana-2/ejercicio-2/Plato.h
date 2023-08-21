#pragma once
#include "iostream"
#include "string"

using namespace std;

class Plato
{
private:
	string nombre;
	short estado;
	char tipo;
	float precio, calorias;
public:
	Plato();
	Plato(string nombre, short estado, char tipo, float precio, float calorias);
	~Plato();

	string getNombre();
	short getEstado();
	char getTipo();
	float getPrecio();
	float getCalorias();
	
	void setNombre(string nombre);
	void setEstado(short estado);
	void setTipo(char tipo);
	void setPrecio(float precio);
	void setCalorias(float calorias);


};

