#include "PC.h"

PC::PC()
{
    this->so = "";
    this->ram = 0.0;
    this->numMaquina = 0;
}

PC::PC(string so, float ram, int numMaquina)
{
    this->so = so;
    this->ram = ram;
    this->numMaquina = numMaquina;
}

PC::~PC()
{
}

string PC::datosPc()
{
    string resultado = "";
    resultado += "\nSO: " + this->so + "\n";
    resultado += "RAM: " + std::to_string(this->ram) + "\n";
    resultado += "Numero de maquina: " + std::to_string(this->numMaquina) + "\n";
    return resultado;
}
