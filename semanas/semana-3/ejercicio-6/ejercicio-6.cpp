#include "Triangulo.h"

short menu() {
	short opt;
	cout << "---MENU---" << endl;
	cout << "1. Tri" << char(160) << "ngo Equil" << char(160) << "tero Horario" << endl;
	cout << "2. Tri" << char(160) << "ngo Rect" << char(160) << "ngulo Horario" << endl;
	cout << "Selecciona una opci" << char(162) << "n: ";
	cin >> opt;
	return opt;
}

void generarFigura(Triangulo* triangulo, int opt) {
	int lado1, lado2 = 0;
	char caracter;
	if (opt == 1) {
		cout << "Ingrese el lado: "; cin >> lado1;
	}
	else {
		cout << "Ingrese el lado 1: "; cin >> lado1;
		cout << "Ingrese el lado 2: "; cin >> lado2;
	}
	cout << "Ingrese el car" << char(160) << "cter: "; cin >> caracter;
	triangulo = new Triangulo(
		opt == 1 ? TipoDeTriangulo::Equilatero : TipoDeTriangulo::Rectangulo,
		caracter, lado1, lado2
	);
	Console::CursorVisible = false;

	triangulo->generarFigura();
}

int main() {
	Triangulo* triangulo = nullptr;
	while (1)
	{
		short opt = menu();
		generarFigura(triangulo, opt);
		_getch();
	}
	return 0;
}