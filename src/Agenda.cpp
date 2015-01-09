/*
 * Agenda.cpp
 *
 *  Created on: 08/01/2015
 *      Author: falanhx
 */

#include "Agenda.h"

Agenda::Agenda() {
	// TODO Auto-generated constructor stub

}

Agenda::~Agenda() {
	// TODO Auto-generated destructor stub
}

void Agenda::insertar(Contacto aux)
{
		_contactos.push_back(aux);
}


//Borrar por DNI
void Agenda::borrar(Contacto aux,string dni)
{
	int encontrado=0;
	int i;
	for(i=0;i<_contactos.size();i++)
	{
		if(( dni==_contactos._dni)&&(encontrado==0))
		{
			
			_contactos.erase(i);
			encontrado=1;

		}
	}
	
}