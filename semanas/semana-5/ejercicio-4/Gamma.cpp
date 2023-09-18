#include "Gamma.h"

Gamma::Gamma()
{
	ancho = 19; alto = 10;
	x = 2 * Console::WindowWidth / 3;
	y = rand() % (Console::WindowHeight - alto);
}

Gamma::~Gamma()
{
}

void Gamma::pintar() {
	Console::ForegroundColor = color;
	Console::CursorVisible = false;
	Console::SetCursorPosition(x, y);       cout << "        .          ";
	Console::SetCursorPosition(x, y + 1);   cout << "        |          ";
	Console::SetCursorPosition(x, y + 2);   cout << "  .- '  ^  ' - .   ";
	Console::SetCursorPosition(x, y + 3);   cout << "  /_.........._/   ";
	Console::SetCursorPosition(x, y + 4);	cout << ".-'            '-. ";
	Console::SetCursorPosition(x, y + 5);   cout << "(   ooo ooo ooo   )";
	Console::SetCursorPosition(x, y + 6);   cout << " '-.,_________,.-' ";
	Console::SetCursorPosition(x, y + 7);   cout << "   /           \   ";
	Console::SetCursorPosition(x, y + 8);   cout << " _/             \_ ";
	Console::SetCursorPosition(x, y + 9);   cout << "`'`            `'` ";
}