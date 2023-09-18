#pragma once
#include "Alfa.h"
#include "Beta.h"
#include "Gamma.h"
#include "Ovni.h"

class Juego
{
private:
	vector<Ovni*>* ovnis;

public:
	Juego();
	~Juego();
	void agregarOvni(Ovni* ovni);
	void eliminarOvni(int index);
	void pintarOvnis();
	void moverOvnis();
	void borrarOvnis();

};


