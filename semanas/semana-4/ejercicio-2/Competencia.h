#pragma once
#include "Auto.h"

class Competencia
{
private:
	Auto** autos;

public:
	Competencia();
	~Competencia();
	void posicionesIniciales();
	void iniciaCompetencia();

};

