#include "Triangulo.h"

Triangulo::Triangulo()
{
	this->caracter = ' ';
	this->lado1 = 0;
	this->lado2 = 0;
	this->x = 0;
	this->y = 0;
	this->dx = 1;
	this->dy = 1;
}

Triangulo::Triangulo(TipoDeTriangulo tipo, char caracter, int lado1, int lado2)
{
	this->caracter = caracter;
	this->lado1 = lado1;
	this->lado2 = lado2;
	this->tipo = tipo;
	this->x = 0;
	this->y = Console::CursorTop;
	this->dx = 1;
	this->dy = 1;
}

void Triangulo::generarFigura()
{
	
	if (this->tipo == TipoDeTriangulo::Equilatero) {
		int _y1 = this->y;
		this->y += this->lado1;
		int _y2 = this->y;
		do {
			if (this->y == _y1 + 1) this->dy *= -1;
			if (this->dy < 0 && this->y == _y2) {
				this->dy = 0;
				this->dx *= -2;
			}
			Console::SetCursorPosition(this->x, this->y);
			cout << this->caracter;
			this->x += this->dx * 2;
			this->y -= this->dy;
			_sleep(100);
		} while (this->x != 0 || this->y != _y2);
		return;
	}

}

Triangulo::~Triangulo()
{
}