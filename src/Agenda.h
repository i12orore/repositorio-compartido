/*
 * Agenda.h
 *
 *  Created on: 04/12/2014
 *      Author: falanhx
 */

#ifndef AGENDA_H_
#define AGENDA_H_

#include"Contacto.h"
#include<list>


class Agenda {
private:
	Contacto <list> _contactos;
public:
	Agenda();
	virtual ~Agenda();
};

#endif /* AGENDA_H_ */
