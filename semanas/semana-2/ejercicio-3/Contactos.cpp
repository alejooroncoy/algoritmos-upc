#include "Contactos.h"

Contactos::Contactos()
{
	this->contactos = nullptr;
}

Contactos::~Contactos()
{
	delete this->contactos;
	this->contactos = nullptr;
	delete this->n;
	this->n = nullptr;
}

void Contactos::agregarContacto(Contacto* contacto)
{
	if (this->contactos == nullptr) {
		this->n = new int;
		*this->n = 0;
	}
	Contacto** contactosTemporal = new Contacto * [*this->n + 1];

	for (int i = 0; i < *this->n; i++) 
		contactosTemporal[i] = this->contactos[i];
	if (this->contactos != nullptr) delete this->contactos;

	contactosTemporal[*this->n] = contacto;
	*this->n += 1;
	this->contactos = contactosTemporal;
}

void Contactos::modificarContacto(int pos, string nombre, string facultad, string email, string redSocial,
	ll telefono, Fecha* fecha, char sexo)
{
	Contacto* contactoAntiguo = this->getContacto(pos);

	if (contactoAntiguo != nullptr) {
		if (nombre != "") contactoAntiguo->setNombre(nombre);
		if (facultad != "") contactoAntiguo->setFacultad(facultad);
		if (email != "") contactoAntiguo->setEmail(nombre);
		if (redSocial != "") contactoAntiguo->setRedSocial(nombre);
		if (telefono != 0) contactoAntiguo->setTelefono(telefono);
		if (fecha != nullptr) {
			Fecha* fechaAntigua = contactoAntiguo->getFecha();
			if (fecha->getAno() != 0) fechaAntigua->setAno(fecha->getAno());
			if (fecha->getMes() != "") fechaAntigua->setMes(fecha->getMes());
			if (fecha->getDia() != 0) fechaAntigua->setDia(fecha->getDia());
		}
		if (sexo != ' ') contactoAntiguo->setSexo(sexo);
	}

}

void Contactos::eliminarContacto(int pos)
{
	if (this->contactos != nullptr && 0 <= pos && pos < *this->n) {
		Contacto** contactosTemporal = new Contacto * [*this->n - 1];
		for (int i = 0; i < *this->n; i++) {
			if (pos != *this->n) {
				contactosTemporal[i] = this->contactos[i];
			}
		}
		if (this->contactos != nullptr) delete this->contactos;
		this->contactos = contactosTemporal;
		*this->n -= 1;
	}
}

Contacto* Contactos::getContacto(int pos)
{
	if (this->contactos != nullptr && 0 <= pos && pos < *this->n) {
		return this->contactos[pos];
	}
	return nullptr;
}

ContactosFiltrados* Contactos::filtrarContactos(TiposDeFiltrado tipo) {
	if (this->contactos != nullptr) {
		ContactosFiltrados* contactosFiltrados = new ContactosFiltrados;
		for (int i = 0; i < *this->n; i++) {
			if (tipo == TiposDeFiltrado::añosEnMayo && this->contactos[i]->getFecha()->getMes() == "mayo" ||
				tipo == TiposDeFiltrado::sonVarones && toupper(this->contactos[i]->getSexo()) == 'H' ||
				tipo == TiposDeFiltrado::redSocialFW &&
				(this->contactos[i]->getRedSocial() == "facebook" ||
					this->contactos[i]->getRedSocial() == "Facebook" ||
					this->contactos[i]->getRedSocial() == "whatsApp" ||
					this->contactos[i]->getRedSocial() == "whatsapp" ||
					this->contactos[i]->getRedSocial() == "Whatsapp" ||
					this->contactos[i]->getRedSocial() == "WhatsApp"
					)
				) {
				Contacto** contactosTemporal = new Contacto * [contactosFiltrados->n + 1];
				for (int j = 0; j < contactosFiltrados->n; j++) {
					contactosTemporal[j] = contactosFiltrados->contactos[j];
				}
				contactosTemporal[contactosFiltrados->n] = this->contactos[i];
				contactosFiltrados->contactos = contactosTemporal;
				contactosFiltrados->n += 1;
			}
		}
		return contactosFiltrados;
	}
	return nullptr;
}

int Contactos::getN()
{
	if(this->n != nullptr) return *this->n;
	return 0;
}

string Contactos::toString()
{
	string resultado = "";
	if (this->contactos == nullptr) {
		resultado += "No hay contactos registrados";
		return resultado;
	}
	resultado += "Contactos\n";
	for (int i = 0; i < *this->n; i++) {
		resultado += "Contacto N" + string(1, 248) + " " + to_string(i + 1) + ":\n";
		resultado += "\r" + this->contactos[i]->toString();
	}
	return resultado;
}
