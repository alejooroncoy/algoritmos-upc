#include "ListaMotorizados.h"

short menu() {
	short opt;
	cout << "--------------MENU--------------" << endl;
	cout << R"(1.- Agregar Motorizado
2.- Eliminar Motorizado
3.- Mostrar Todos los Motorizados
4.- Motorizados Mapi
5.- Motorizados Glopo
)";
	cout << "Seleccione la opci" << char(162) << "n: ";
	cin >> opt;
	return opt;
}

void agregarMotorizado(ListaMotorizados* listaMotorizados, Motorizado* motorizado) {
	string nombre, apellido, placa, empresa;
	float kilometraje;
	cout << "Nombre: "; cin.ignore(); getline(cin, nombre);
	cout << "Apellido: "; getline(cin, apellido);
	cout << "Placa: "; getline(cin, placa);
	cout << "Empresa: "; getline(cin, empresa);
	cout << "Kilometros: "; cin >> kilometraje;
	motorizado = new Motorizado(nombre, apellido, placa, empresa, kilometraje);
	listaMotorizados->agregarMotorizado(motorizado);
	cout << "Se agreg" << char(162) << " correctamente el motorizado." << endl;
}

void eliminarMotorizado(ListaMotorizados* listaMotorizados) {
	if (listaMotorizados->getN() <= 0) {
		cout << "No hay motorizados para eliminar:(. Intente agregando primero uno." << endl;
		return;
	}
	int pos;
	do {
		cout << "Posici" << char(162) << "n del motorizado a eliminar(Empezando desde 0) : "; cin >> pos;
	} while (pos < 0 || pos >= listaMotorizados->getN());
	listaMotorizados->eliminarMotorizado(pos);
	cout << "Se elimin" << char(162) << " correctamente el motorizado." << endl;

}

void mostrarMotorizados(ListaMotorizados* listaMotorizados) {
	if (listaMotorizados->getN() <= 0) {
		cout << "No hay motorizados para mostrar:(." << endl;
		return;
	}
	cout << "Lista de motorizados: " << endl;
	cout << "Nombre\tApellido\tPlaca\tEmpresa\tKM\tPrecio" << endl;
	cout << listaMotorizados->toString();
}

void mostrarMotorizadosFiltrados(ListaMotorizados* listaMotorizados, TipoDeFiltrado tipoDeFiltrado) {
	if (listaMotorizados->getN() <= 0) {
		cout << "No hay motorizados para filtrar:(." << endl;
		return;
	}
	cout << "Lista de motorizados que coinciden con la empresa seleccionada: " << endl;
	cout << "Nombre\tApellido\tPlaca\tEmpresa\tKM\tPrecio" << endl;
	cout << listaMotorizados->filtrarMotorizados(tipoDeFiltrado);
}

int main() {
	ListaMotorizados* listaMotorizados = new ListaMotorizados();
	Motorizado* motorizado;
	while (1) {
		short opt = menu();
		switch (opt)
		{
		case 1:
			agregarMotorizado(listaMotorizados, motorizado);
			break;
		case 2: 
			eliminarMotorizado(listaMotorizados);
			break;
		case 3: 
			mostrarMotorizados(listaMotorizados);
			break;
		case 4: 
			mostrarMotorizadosFiltrados(listaMotorizados, TipoDeFiltrado::Globo);
			break;
		case 5: 
			mostrarMotorizadosFiltrados(listaMotorizados, TipoDeFiltrado::Mapi);
			break;
		default:
			cout << "Opci" << char(162) << "n invalida" << endl;
			break;
		}
		cout << "Presionar cualquier tecla para continuar";
		_getch();
		Console::Clear();
	}
	return 0;
}