#pragma once
#include "iostream"
#include "string"

using namespace std;

class Persona {
private:
	string nombre;
	int edad;
	float peso, altura;
	long long DNI;
	char sexo;
	void comprobarSexo(char sexo);

public:
	Persona();
	Persona(string nombre, int edad, char sexo);
	Persona(string nombre, int edad, char sexo, float altura, float peso);
	~Persona();
	short IMC();
	bool esMayorDeEdad();
	void generaDNI();

	string getNombre();
	void setNombre(string nombre);
	int getEdad();
	void setEdad(int edad);
	float getPeso();
	void setPeso(float peso);
	float getAltura();
	void setAltura(float altura);
	char getSexo();
	void setSexo(char sexo);
	void toString();
};