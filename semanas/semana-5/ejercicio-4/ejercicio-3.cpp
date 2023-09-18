#include "Juego.h"

int main() {
	int alfas = 0, betas = 0, gammas = 0, total = 0;
	Juego* juego = new Juego();
	
	Console::SetCursorPosition(Console::WindowWidth / 2 - 13,
		Console::WindowHeight / 2); cout << "Comienza la invasi" << char(162) << "n...!!";
	
	while (total < 20)
	{
		if (_kbhit()) {
			char tecla = _getch();
			if (total == 0) Console::Clear();
			if (tolower(tecla) == 'a') {
				juego->agregarOvni(new Alfa());
				alfas++;
				total++;
			}
		}

		if (alfas == 2) {
			juego->agregarOvni(new Beta());
			betas++;
			alfas = 0;
			total++;
		}
		
		if (betas == 2) {
			juego->agregarOvni(new Gamma());
			gammas++;
			betas = 0;
			total++;
		}

		juego->borrarOvnis();
		juego->moverOvnis();
		juego->pintarOvnis();

		_sleep(250);
	}

	Console::Clear();
	Console::ForegroundColor = ConsoleColor::White;

	Console::SetCursorPosition(Console::WindowWidth / 2 - 11,
		Console::WindowHeight / 2);  cout << "Hemos sido invadidos..";

	_getch();
	return 0;
}