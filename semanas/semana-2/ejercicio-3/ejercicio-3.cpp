#include "iostream"
#include "conio.h"
#include "Contacto.h"
#include "Contactos.h"

using namespace System;
using namespace std;

short* menu() {
	short* opt = new short;
	cout << "----------MENU----------" << endl;
	cout << "1. Lista de contactos" << endl;
	cout << "2. Agregar un contacto" << endl;
	cout << "3. Modificar un contacto" << endl;
	cout << "4. Eliminar un contacto" << endl;
	cout << "------------------------REPORTES------------------------" << endl;
	cout << "5. Mostrar los contactos que cumplen a" << char(164) << "os en mayo" << endl;
	cout << "6. Mostrar los contactos que son varones" << endl;
	cout << "7. Mostrar los contactos que tienen Facebook y WhatsApp" << endl;
	cout << "Elige una opci" << char(162) << "n: ";

	cin >> *opt;
	return opt;
}

void agregarContacto(Contactos* contactos) {
	string nombre = "", facultad = "", email = "", redSocial = "", mes = "";
	char sexo = ' ';
	ll telefono = 0;
	int dia = 0, ano = 0;
	Fecha* fecha;

	cout << "Nombre: "; cin >> nombre;
	cout << "Tel" << char(130) << "fono: "; cin >> telefono;
	cout << "Sexo(H: Hombre, M: mujer): "; cin >> sexo;
	cout << "Facultad: "; cin >> facultad;
	cout << "Email: "; cin >> email;
	cout << "Red Social: "; cin >> redSocial;
	cout << "Fecha de nacimiento: " << endl;
	cout << "  D" << char(161) << "a: "; cin >> dia;
	cout << "  Mes: ";  cin >> mes;
	cout << "  A" << char(164) << "o: "; cin >> ano;

	fecha = new Fecha(dia, mes, ano);
	Contacto* contacto = new Contacto(nombre, facultad, email, redSocial,
		telefono, fecha, sexo);
	contactos->agregarContacto(contacto);
	cout << "Contacto " << "\"" << nombre << "\"" << " agregado";
}

void modificarContacto(Contactos* contactos) {
	int pos;
	if (contactos->getN() > 0) {
		do {
			cout << "Posici" << char(162) << "n del contacto a modificar: ";
			cin >> pos;
		} while (0 > pos || pos >= contactos->getN());
		string nombre = "", facultad = "", email = "", redSocial = "", mes = "";
		char sexo = ' ';
		ll telefono = 0;
		int dia = 0, ano = 0;
		char decision;
		Fecha* fecha;

		Contacto* contacto = contactos->getContacto(pos);

		if (contacto != nullptr) {
			cout << "Nombre" << "(Actual: " << contacto->getNombre() << ")" << ": "; 
			cin.ignore(); getline(cin, nombre);
			cout << "Tel" << char(130) << "fono" << "(Actual: " << contacto->getTelefono() << ")" << ": ";
			cin.ignore(); cin >> telefono;

			cout << char(168) << "Deseas cambiar el sexo? (S: si, N: no): ";
			cin >> decision;
			if (decision == 'S') {
				cout << "Sexo" << "(Actual: " << contacto->getSexo() << ")" << ": "; cin >> sexo;
			}
			 
			cout << char(168) << "Deseas cambiar la facultad? (S: si, N: no): ";
			cin >> decision;

			if (decision == 'S') {
				cout << "Facultad" << "(Actual: " << contacto->getFacultad() << ")" << ": "; cin >> facultad;
			}

			cout << char(168) << "Deseas cambiar el email? (S: si, N: no): ";
			cin >> decision;

			if (decision == 'S') {
				cout << "Email:" << "(Actual: " << contacto->getEmail() << ")" << ": "; cin >> email;
			}

			cout << char(168) << "Deseas cambiar la red social? (S: si, N: no): ";
			cin >> decision;

			if (decision == 'S') {
				cout << "Red Social:" << "(Actual: " << contacto->getRedSocial() << ")" << ": "; cin >> redSocial;
			}

			cout << char(168) << "Deseas cambiar la fecha de nacimento? (S: si, N: no): ";
			cin >> decision;

			if (decision == 'S') {
				cout << "Fecha de nacimiento: " << endl;

				cout << char(168) << "Deseas cambiar el d" << char(161) << "a? (S: si, N: no):";
				cin >> decision;

				if (decision == 'S') {
					cout << "  D" << char(161) << "a:" << "(Actual: " << contacto->getFecha()->getDia() << ")" << ": "; cin >> dia;
				}

				cout << char(168) << "Deseas cambiar el mes? (S: si, N: no):";
				cin >> decision;

				if (decision == 'S') {
					cout << "  Mes:" << "(Actual: " << contacto->getFecha()->getMes() << ")" << ": ";  cin >> mes;
				}
				cout << char(168) << "Deseas cambiar el a" << char(164) << "o? (S: si, N: no):";
				cin >> decision;

				if (decision == 'S') {
					cout << "  A" << char(164) << "o:" << "(Actual: " << contacto->getFecha()->getAno() << ")" << ": "; cin >> ano;
				}
			}

			fecha = new Fecha(dia, mes, ano);
			contactos->modificarContacto(pos, nombre, facultad, email, redSocial,
				telefono, fecha, sexo);

			cout << "Los cambios al contacto " << "\"" << contacto->getNombre() << "\"" << " fueron realizados";
		}
		return;
	}
	cout << "No hay contactos para modificar :(";

}

void eliminarContacto(Contactos* contactos) {
	int pos;
	if (contactos->getN() > 0) {
		do {
			cout << "Posici" << char(162) << "n del contacto a eliminar: ";
			cin >> pos;
		} while (0 > pos || pos >= contactos->getN());

		contactos->eliminarContacto(pos);
		return;
	}

	cout << "No hay contactos para eliminar :(";

}

void filtracionDeContactos(Contactos* contactos, TiposDeFiltrado filtrado) {
	ContactosFiltrados* contactosFiltrados = contactos->filtrarContactos(filtrado);
	if (contactosFiltrados) {
		if (!contactosFiltrados->n) {
			cout << "No encontramos contactos que coincidan con el requisito de filtrado :,c";
			return;
		}
		if (filtrado == TiposDeFiltrado::añosEnMayo) cout << "Contactos que cumplen a" <<
			char(160) << "os en Mayo" << endl;
		if (filtrado == TiposDeFiltrado::sonVarones) cout << "Contactos que son varones" << endl;
		if (filtrado == TiposDeFiltrado::redSocialFW)
			cout << "Contactos que tienen red social Facebook y Whatsapp" << endl;
		for (int i = 0; i < contactosFiltrados->n; i++) {
			cout << "Contacto N" << char(248) << i + 1 << ":" << endl;
			cout << contactosFiltrados->contactos[i]->toString();
		}
		return;
	}

	cout << "No hay contactos para filtrar :(";
}

int main() {
	Contactos* contactos = new Contactos();
	while (1) {
		short* opt = menu();
		switch (*opt)
		{
		case 1:
			cout << contactos->toString();
			break;
		case 2:
			agregarContacto(contactos);
			break;
		case 3:
			modificarContacto(contactos);
			break;
		case 4:
			eliminarContacto(contactos);
			break;
		case 5:
			filtracionDeContactos(contactos, TiposDeFiltrado::añosEnMayo);
			break;
		case 6:
			filtracionDeContactos(contactos, TiposDeFiltrado::sonVarones);
			break;
		case 7:
			filtracionDeContactos(contactos, TiposDeFiltrado::redSocialFW);
			break;

		default:
			cout << "Lo sentimos, has seleccionado una opci" << char(162) << "n inv" << char(160) << "lida";
		}
		cout << "\nPresiona cualquier tecla para continuar";

		_getch();
		Console::Clear();
	}
	return 0;
}