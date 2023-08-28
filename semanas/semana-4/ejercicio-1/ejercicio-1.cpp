#include "Cuadrados.h"

int main() {
	Cuadrados* cuadrados = new Cuadrados();
	string mensajes[3] = { "A. Agregar cuadrado",
		"E: Eliminar el primer cuadrado",  "C: Cambiar los colores" };

	Console::SetCursorPosition(Console::WindowWidth / 2 - mensajes[0].length() / 2, Console::WindowHeight / 2);
	cout << mensajes[0];
	Console::SetCursorPosition(Console::WindowWidth / 2 - mensajes[1].length() / 2, Console::WindowHeight / 2 + 1);
	cout << mensajes[1];
	Console::SetCursorPosition(Console::WindowWidth / 2 - mensajes[2].length() / 2, Console::WindowHeight / 2 + 2);
	cout << mensajes[2];
	while (1) {
		if (_kbhit()) {
			char tecla = _getch();
			if (tecla == 'a') cuadrados->agregarCuadrado();
			else if (tecla == 'e') cuadrados->eliminarPrimerCuadrado();
			else if (tecla == 'c') cuadrados->cambiarColoresDeLosCuadrados();
		}
		cuadrados->mostrar();
	}
	return 0;
}