#pragma once
#include "Contacto.h"

enum TiposDeFiltrado {
	añosEnMayo,
	sonVarones,
	redSocialFW,
};

struct ContactosFiltrados {
	Contacto** contactos;
	int n = 0;
};

class Contactos
{
private:
	Contacto** contactos;
	int* n;

public:
	Contactos();
	~Contactos();
	string toString();
	void agregarContacto(Contacto* contacto);
	void modificarContacto(int pos, string nombre, string facultad, string email, string redSocial,
		ll telefono, Fecha* fecha, char sexo);
	void eliminarContacto(int pos);
	Contacto* getContacto(int pos);
	ContactosFiltrados* filtrarContactos(TiposDeFiltrado tipo);
	int getN();
};

