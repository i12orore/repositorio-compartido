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

	vector<Contacto> getContactos() const {
		return _contactos;
	}

	void setContactos(vector<Contacto> contactos) {
		_contactos = contactos;
	}
};

#endif /* AGENDA_H_ */
