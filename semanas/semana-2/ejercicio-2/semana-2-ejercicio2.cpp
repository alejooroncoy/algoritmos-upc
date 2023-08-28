#include "Carta.h"
#include "conio.h"

using namespace System;
using namespace std;

short* menu() {
	short* opt = new short;
	cout << "----------MENU----------" << endl;
	cout << "1. Lista de platos" << endl;
	cout << "2. Agregar un plato" << endl;
	cout << "3. Modificar un plato" << endl;
	cout << "4. Eliminar un plato" << endl;
	cout << "------------REPORTES------------" << endl;
	cout << "5. Mostrar los platos picantes" << endl;
	cout << "6. Mostrar los platos m" << char(162) << "s caros" << endl;
	cout << "7. Salir" << endl;
	cout << "Elige una opci" << char(162) << "n: ";

	cin >> *opt;
	return opt;
}


void agregarPlato(Carta* carta, Plato* plato) {
	string nombre;
	short estado;
	char tipo;
	float calorias, precio;

	cout << "Nombre de plato: "; cin.ignore(); getline(cin, nombre);
	cout << "Estado de plato (1: Fr" << char(161) << "o, 2: Caliente): "; cin >> estado;
	cout << "Tipo de plato (S: picante, N: No picante): "; cin >> tipo;
	cout << "Calor" << char(161) << "as: "; cin >> calorias;
	cout << "Precio: "; cin >> precio;

	plato = new Plato(nombre, estado, tipo, calorias, precio);
	carta->addPlatos(plato);
	cout << "Plato agregado satisfactoriamente";
}

void mostrarPlatos(Carta* carta) {
	if (carta->getN() > 0) {
		cout << "Nombre\t Estado\t Tipo\t Calor" << char(161) << "as\t Precio" << endl;

		for (int i = 0; i < carta->getN(); i++) {
			cout << carta->getPlato(i)->toString();
			cout << endl;
		}
		return;
	}
	cout << "El arreglo no tiene elementos" << endl;
}

void modificarPlato(Carta* carta, Plato* plato) {
	string nombre, estadoString = "", tipoString = "",
		caloriasString = "", precioString = "";
	short estado;
	char tipo;
	float calorias, precio;
	int pos;
	cout << "Ingrese la posici" << char(162) << "n del plato que quieres modificar: ";
	cin >> pos;

	plato = carta->getPlato(pos);

	cout << "Nombre (Actual: " << plato->getNombre() << "): ";
	cin.ignore(); getline(cin, nombre);
	if (nombre != "") {
		plato->setNombre(nombre);
		cout << "Nombre modificado:D" << endl;
	}


	cout << "Estado (Actual: " << plato->getEstado() << "): ";
	getline(cin, estadoString);
	if (estadoString != "") {
		estado = stoi(estadoString);
		plato->setEstado(estado);
		cout << "Estado modificado:D" << endl;
	}

	cout << "Tipo (Actual: " << plato->getTipo() << "): ";
	getline(cin, tipoString);
	if (tipoString != "") {
		tipo = tipoString[0];
		plato->setTipo(tipo);
		cout << "Tipo modificado:D" << endl;
	}

	cout << "Calor" << char(161) << "as " << "(Actual: " << plato->getCalorias() << ") : ";
	getline(cin, caloriasString);
	if (caloriasString != "") {
		calorias = stof(caloriasString);
		plato->setCalorias(calorias);
		cout << "Calor" << char(161) << "as" << "modificadas:D" << endl;
	}

	cout << "Precio " << "(Actual: " << plato->getPrecio() << ") : ";
	getline(cin, precioString);
	if (precioString != "") {
		precio = stof(precioString);
		plato->setPrecio(precio);
		cout << "Precio modificado:D" << endl;
	}

}

void eliminarPlato(Carta* carta, Plato* plato) {
	int pos;
	cout << "Ingrese la posici" << char(162) << "n del plato que quieres modificar: ";
	cin >> pos;
	carta->eliminarPlato(pos);
	cout << "Eliminado satisfactoriamente";
}

void reporteDePlatosPicantes(Carta* carta, Plato* plato) {
	if (carta->getN() > 0) {
		cout << "Nombre\t Estado\t Tipo\t Calor" << char(161) << "as\t Precio" << endl;

		for (int i = 0; i < carta->getN(); i++) {
			plato = carta->getPlato(i);
			if (plato->getTipo() == 'S') {
				cout << carta->getPlato(i)->toString();
				cout << endl;
			}
		}
		return;
	}
	cout << "El arreglo no tiene elementos para realizar el reporte" << endl;
}

void reporteDePlatosMasCaros(Carta* carta, Plato* plato) {
	if (carta->getN() > 0) {
		cout << "Nombre\t Estado\t Tipo\t Calor" << char(161) << "as\t Precio" << endl;

		for (int i = 0; i < carta->getN(); i++) {
			plato = carta->getPlato(i);
			if (plato->getPrecio()) {
				
			}
		}
		return;
	}
	cout << "El arreglo no tiene elementos para realizar el reporte" << endl;
}

int main() {
	Carta* carta = new Carta();
	Plato* plato;

	while (1) {
		short* opt = menu();
		switch (*opt)
		{
		case 1: {
			mostrarPlatos(carta);
			break;
		}
		case 2: {
			agregarPlato(carta, plato);
			break;
		}
		case 3: {
			modificarPlato(carta, plato);
			break;
		}
		case 4: {
			eliminarPlato(carta, plato);
			break;
		}
		case 5: {
			reporteDePlatosPicantes(carta, plato);
			break;
		}
		case 6: {
			reporteDePlatosMasCaros(carta, plato);
			break;
		}
		case 7: {
			exit(0);
		}
		default:
			break;
		}
		_getch();
		Console::Clear();
	}
}