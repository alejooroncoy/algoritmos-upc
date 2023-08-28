#include "Competencia.h"

Competencia::Competencia()
{
	this->autos = new Auto * [3];
	this->autos[0] = new Auto(1, 4, ConsoleColor::Blue);
	this->autos[1] = new Auto(1, 15, ConsoleColor::Yellow);
	this->autos[2] = new Auto(1, 25, ConsoleColor::Cyan);
}

Competencia::~Competencia()
{
	delete[] autos;
}

void Competencia::posicionesIniciales()
{
	for (int i = 0; i < 3; i++) {
		this->autos[i]->dibujar();
	}
}

void Competencia::iniciaCompetencia()
{
	while (!(this->autos[0]->enMeta() 
		|| this->autos[1]->enMeta() || this->autos[2]->enMeta()))
	{
		for (int i = 0; i < 3; i++) {
			this->autos[i]->borrar();
			this->autos[i]->mover();
			if (this->autos[i]->enMeta()) break;
			_sleep(50);
			this->autos[i]->dibujar();
		}
	}
	Console::Clear();
	if (this->autos[0]->enMeta()) {
		Console::ForegroundColor = this->autos[0]->getColor();
		cout << "\nGan" << char(162) << " el carro de color 1";
	};
	if (this->autos[1]->enMeta()) {
		Console::ForegroundColor = this->autos[1]->getColor();
		cout << "\nGan" << char(162) << " el carro de color 2";
	};
	if (this->autos[2]->enMeta()) {
		Console::ForegroundColor = this->autos[2]->getColor();
		cout << "\nGan" << char(162) << " el carro de color 3";
	};
	Console::ForegroundColor = ConsoleColor::White;
}
