#include "Beta.h"

Beta::Beta()
{
	ancho = 11;
	alto = 3;
	x = Console::BufferWidth / 2 - ancho / 2;
}

Beta::~Beta()
{
}

void Beta::pintar()
{
	Console::ForegroundColor = color;
	Console::CursorVisible = false;
	Console::SetCursorPosition(x, y);       cout << "   .---.   ";
	Console::SetCursorPosition(x, y + 1);	cout << " _/__~0_\_ ";
	Console::SetCursorPosition(x, y + 2);   cout << "(_________)";
}