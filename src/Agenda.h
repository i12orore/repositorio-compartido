/*
 * Agenda.h
 *
 *  Created on: 04/12/2014
 *      Author: falanhx
 */

#ifndef AGENDA_H_
#define AGENDA_H_

#include"Contacto.h"
#include<vector>


class Agenda {
private:
	std::vector <Contacto> _contactos;
public:
	Agenda();
	virtual ~Agenda();
	void insertar(Contacto _contactos);
};

#endif /* AGENDA_H_ */
