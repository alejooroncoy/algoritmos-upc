#include "Alfa.h"

Alfa::Alfa()
{
	ancho = 21;
	alto = 5;
	x = 1;
	y = rand() % (Console::WindowHeight - alto);
}

Alfa::~Alfa()
{
}

void Alfa::pintar() {
	Console::ForegroundColor = color;
	Console::CursorVisible = false;
	Console::SetCursorPosition(x, y);       cout << "       _.---._       ";
	Console::SetCursorPosition(x, y + 1);   cout << "      .'     '.      ";
	Console::SetCursorPosition(x, y + 2);	cout << " _.-~===========~-._ ";
	Console::SetCursorPosition(x, y + 3);   cout << "(___________________)";
	Console::SetCursorPosition(x, y + 4);   cout << "      \_______/      ";
}
