#include "Persona.h"

using namespace System;

enum Sexo {
	Hombre = 'H',
	Mujer = 'M'
};

void Persona::comprobarSexo(char sexo)
{
	if (sexo == Sexo::Hombre || sexo == Sexo::Mujer) this->sexo = sexo;
	else this->sexo = Sexo::Hombre;
}

Persona::Persona()
{
	this->altura = 0.0;
	this->peso = 0.0;
	this->edad = 0;
	this->nombre = "";
	this->sexo = Sexo::Hombre;
	this->generaDNI();
}

Persona::Persona(string nombre, int edad, char sexo)
{
	this->nombre = nombre;
	this->edad = edad;
	this->comprobarSexo(sexo);
	this->altura = 0.0;
	this->peso = 0.0;
	this->generaDNI();

}

Persona::Persona(string nombre, int edad, char sexo, float altura, float peso)
{
	this->nombre = nombre;
	this->edad = edad;
	this->sexo = sexo;
	this->altura = altura;
	this->peso = peso;
	this->comprobarSexo(sexo);
	this->generaDNI();
}

Persona::~Persona(){}

short Persona::IMC() {
	double imc = double(this->peso) / pow(this->altura, 2);
	if (imc < 20) return -1;
	if (imc < 25) return 0;
	return 1;
}

void Persona::generaDNI() {
	_sleep(0);
	Random r;
	this->DNI = r.Next(pow(10, 8), pow(10, 9) - 1);
}

string Persona::getNombre() {
	return this->nombre;
}


void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

int Persona::getEdad()
{
	return this->edad;
}

void Persona::setEdad(int edad)
{
	this->edad = edad;
}

float Persona::getAltura()
{
	return this->altura;
}

void Persona::setAltura(float altura)
{
	this->altura = altura;
}

char Persona::getSexo()
{
	return this->sexo;
}

void Persona::setSexo(char sexo)
{
	this->comprobarSexo(sexo);
}

float Persona::getPeso() {
	return this->peso;
}

void Persona::setPeso(float peso) {
	this->peso = peso;
}

bool Persona::esMayorDeEdad() {
	return this->edad >= 18;
}

void Persona::toString() {
	cout << "Nombre: " << this->nombre << endl;
	cout << "Edad: " << this->edad << endl;
	cout << "Sexo: " << this->sexo << endl;
	cout << "Peso: " << this->peso << endl;
	cout << "Altura: " << this->altura << endl;
	cout << "DNI: " << this->DNI << endl;
}

