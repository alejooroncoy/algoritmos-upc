#pragma once
#include "string"
#include "iostream"
#include "Fecha.h"
#define ll long long

using namespace System;
using namespace std;

class Contacto
{
private:
	string nombre, facultad, email, redSocial;
	ll telefono;
	Fecha* fecha;
	char sexo;

public:
	Contacto();
	Contacto(string nombre, string facultad, string email, string redSocial, ll telefono, Fecha* fecha, char sexo);
	~Contacto();
	string getNombre();
	string getFacultad();
	string getEmail();
	string getRedSocial();
	string toString();
	Fecha* getFecha();
	ll getTelefono();
	char getSexo();
	void setNombre(string nombre);
	void setFacultad(string facultad);
	void setEmail(string email);
	void setRedSocial(string redSocial);
	void setTelefono(ll telefono);
	void setSexo(char sexo);
	void setFecha(Fecha* fecha);
};

