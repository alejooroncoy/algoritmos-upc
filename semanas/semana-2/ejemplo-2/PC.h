#pragma once
#include "iostream"
#include "string"

using namespace std;

class PC
{
private:
	string so;
	float ram;
	int numMaquina;
public:
	PC();
	PC(string so, float ram, int numMaquina);
	~PC();
	string datosPc();

};

