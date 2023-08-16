#include "iostream"
#include "conio.h"
#include "Persona.h"

using namespace System;
using namespace std;

Persona* pedirDatosPersona() {
	string nombre;
	int edad;
	float peso, altura;
	char sexo;
	
	cout << "Nombre de la persona: ";
	cin >> nombre;
	cout << "Edad de la persona: "; 
	cin >> edad;
	cout << "Peso de la persona: "; 
	cin >> peso;
	cout << "Altura de la persona: "; 
	cin >> altura;
	cout << "Sexo de la persona: "; 
	cin >> sexo;

	Persona* persona = new Persona(nombre, edad, sexo, altura, peso);
	return persona;
}

void llenarDatosDePersona(Persona* persona1, Persona* persona2) {
	persona2->setNombre(persona1->getNombre());
	persona2->setEdad(persona1->getEdad());
	persona2->setPeso(persona1->getPeso());
	persona2->setAltura(persona1->getAltura());
	persona2->setSexo(persona1->getSexo());
}

void comprobarIMCPersona(Persona* persona, short orden) {
	short IMC = persona->IMC();
	cout << "La persona N" << char(167) << " " << orden << ": ";
	if (IMC == -1) cout << "Est" << char(160) << " debajo de su peso ideal";
	else if (IMC == 0) cout << "Est" << char(160) << " en su peso ideal";
	else cout << "Tiene sobrepeso";
	cout << endl;
}

void comprobarMayorDeEdad(Persona* persona, short orden) {
	bool esMayorDeEdad = persona->esMayorDeEdad();
	cout << "La persona N" << char(167) << " " << orden << " ";
	if (esMayorDeEdad) cout << "es mayor de edad";
	else cout << "es menor de edad";
	cout << endl;
}

void mostrarInfoEdad(Persona* persona, short orden) {
	cout << "Persona N" << char(167) << " " << orden << endl;
	persona->toString();
}

int main() {
	Persona* persona1 = pedirDatosPersona();
	_sleep(0);
	Persona* persona2 = new Persona(persona1->getNombre(), persona1->getEdad(), persona1->getSexo());
	_sleep(0);
	Persona* persona3 = new Persona();

	llenarDatosDePersona(persona1, persona3);
	
	comprobarIMCPersona(persona1, 1);
	comprobarIMCPersona(persona2, 2);
	comprobarIMCPersona(persona3, 3);

	comprobarMayorDeEdad(persona1, 1);
	comprobarMayorDeEdad(persona2, 2);
	comprobarMayorDeEdad(persona3, 3);
	
	mostrarInfoEdad(persona1, 1);
	mostrarInfoEdad(persona2, 2);
	mostrarInfoEdad(persona3, 3);

	_getch();
	return 0;
}