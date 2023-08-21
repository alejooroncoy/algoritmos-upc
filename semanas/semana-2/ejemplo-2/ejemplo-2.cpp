#include "Estudiante.h"
#include "PC.h"

int main() {
	PC* pc = new PC("Linux", 12.0, 154);
	Estudiante* e = new Estudiante("Alejo", 17, 'H', pc);
	

	cout << "Datos PC:" << pc->datosPc() << endl;
	cout << "Datos Estudiante:" << e->mostrarDatos() << endl;
	
	return 0;
}