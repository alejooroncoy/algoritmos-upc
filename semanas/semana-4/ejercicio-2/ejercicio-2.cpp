#include "Competencia.h"

int main() {
	srand(time(nullptr));
	Console::CursorVisible = false;
	Competencia* competencia = new Competencia();
	competencia->posicionesIniciales();

	while (1) {
		char tecla = _getch();
		if (tecla == 32) break;
	}
	competencia->iniciaCompetencia();
	delete competencia;

	_getch();
	return 0;
}