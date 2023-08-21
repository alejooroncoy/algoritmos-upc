#include "Libro.h"

int main() {
	Autor* autor = new Autor("Luis", "Joyanes", "España");
	Libro* libro = new Libro("C++", autor);

	cout << "Los datos son: " << endl;
	cout << "Datos autor: " << autor->mostrarDatos();
	cout << "Los datos del libro son" << endl;
	cout << libro->mostrarDatos();

	cin.ignore();
	return 0;
}