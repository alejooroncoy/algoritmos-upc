#include "Contacto.h"

Contacto::Contacto()
{
	this->nombre = "";
	this->facultad = "";
	this->email = "";
	this->redSocial = "";
	this->telefono = 0;
	this->sexo = ' ';
	this->fecha = nullptr;
}

Contacto::Contacto(string nombre, string facultad, string email, string redSocial, ll telefono, Fecha* fecha, char sexo)
{
	this->nombre = nombre;
	this->facultad = facultad;
	this->email = email;
	this->redSocial = redSocial;
	this->telefono = telefono;
	this->sexo = sexo;
	this->fecha = fecha;
}

Contacto::~Contacto()
{
	delete this->fecha;
	this->fecha = nullptr;
}

string Contacto::getNombre()
{
	return this->nombre;
}

string Contacto::getFacultad()
{
	return this->facultad;
}

string Contacto::getEmail()
{
	return this->email;
}

string Contacto::getRedSocial()
{
	return this->redSocial;
}

Fecha* Contacto::getFecha()
{
	return this->fecha;
}

ll Contacto::getTelefono()
{
	return this->telefono;
}

char Contacto::getSexo()
{
	return this->sexo;
}

void Contacto::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Contacto::setFacultad(string facultad)
{
	this->facultad = facultad;
}

void Contacto::setEmail(string email)
{
	this->email = email;
}

void Contacto::setRedSocial(string redSocial)
{
	this->redSocial = redSocial;
}

void Contacto::setTelefono(ll telefono)
{
	this->telefono = telefono;
}

void Contacto::setSexo(char sexo)
{
	this->sexo = sexo;
}

void Contacto::setFecha(Fecha* fecha)
{
	this->fecha = fecha;
}

string Contacto::toString()
{
	string resultado = "";
	resultado += "Nombre: " + this->nombre + "\n";
	resultado += "Tel" + string(1, 130) + "fono: " + to_string(this->telefono) + "\n";
	resultado += "Facultad: " + this->facultad + "\n";
	resultado += "Fecha de Nacimiento: " + this->fecha->toString() + "\n";
	resultado += "Email: " + this->email + "\n";
	resultado += "Red Social: " + this->redSocial + "\n";
	return resultado;
}
