/*
 * Agenda.h
 *
 *  Created on: 08/01/2015
 *      Author: falanhx
 */

#ifndef AGENDA_H_
#define AGENDA_H_

#include "Contacto.h"
#include <vector>
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>



 using namespace std;

class Agenda {
private:
	vector <Contacto> _contactos;
public:
	Agenda();
	virtual ~Agenda();

	void insertar(Contacto _contactos);
	void borrar(Contacto _contactos,string dni);
	void modificar(string dni, Contacto c);

	vector<Contacto> getContactos() const {
		return _contactos;
	}

	void setContactos(vector<Contacto> contactos) {
		_contactos = contactos;
	}

	void buscarContacto(string apellido,vector<Contacto> & aux);
	void Agenda::BuscarFavoritos(vector<Contacto> &_contactoaux);
};

#endif /* AGENDA_H_ */
