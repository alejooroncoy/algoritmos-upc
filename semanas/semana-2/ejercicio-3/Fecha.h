#pragma once
#include <string>

using namespace std;

class Fecha
{
private:
	int dia, ano;
	string mes;

public:
	Fecha();
	Fecha(int dia, string mes, int ano);
	Fecha(int dia, int mes, int ano);
	~Fecha();
	string mesToString(int mes);
	int getDia();
	string getMes();
	int getAno();
	void setDia(int dia);
	void setMes(int mes);
	void setMes(string mes);
	void setAno(int ano);
	string toString();

};

