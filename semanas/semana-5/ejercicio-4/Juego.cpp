#include "Juego.h"

Juego::Juego()
{
	this->ovnis = new vector<Ovni*>;
}

Juego::~Juego()
{
}

void Juego::agregarOvni(Ovni* ovni)
{
	this->ovnis->push_back(ovni);
}

void Juego::eliminarOvni(int index)
{
	this->ovnis->erase(this->ovnis->begin(), this->ovnis->begin() + index);
}

void Juego::pintarOvnis()
{
	for (int i = 0; i < this->ovnis->size(); i++) {
		this->ovnis->at(i)->pintar();
	}
}

void Juego::moverOvnis()
{
	for (int i = 0; i < this->ovnis->size(); i++) {
		this->ovnis->at(i)->mover();
	}
}

void Juego::borrarOvnis()
{
	for (int i = 0; i < this->ovnis->size(); i++) {
		this->ovnis->at(i)->borrar();
	}
}

