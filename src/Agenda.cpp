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

void Agenda::buscarContacto(string apellido,vector<Contacto> & aux)
{
	/* Recorrer el vector y meter en un vector auxiliar las coincidencias, por referencia*/
	int i, n=0;
	vector<Contacto> aux;

	for(i=0;i<_contactos.size();i++)
	{
			if(_contactos.apellidos==apellido)
				{
					f=1;
					_contactoaux.push_back(_contactos[i]);

				}
			}
			if(f==0)
			{
				cout<<"No hay ningun contacto favorito"<<endl;
			}


		}


	void Agenda::BuscarFavoritos(vector<Contacto> &_contactoaux)
{
	int i,f=0;
	/*Recorrer el vector y meter en un vector auxiliar las coincidencias, por referencia*/

	for(i=0;i<_contactos.size();i++)
	{
		if(_contactos.favorito==1)
		{
			f=1;
			_contactoaux.push_back(_contactos[i]);

		}
	}
	if(f==0)
	{
		cout<<"No hay ningun contacto favorito"<<endl;
	}


}
	
}