/*
 * Agenda.cpp
 *
 *  Created on: 08/01/2015
 *      Author: falanhx
 */

#include "Agenda.h"
#include <vector>

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

//Se pasa el vector de contactos y el dni del contacto a modificar, si lo encuentra se modifica
/*####
 * Lo ideal seria utilizar el metodo buscar y no tener que implementar repetidas veces el mismo bucle, pero
 * no ha sido hecho asi
 ####*/
bool Agenda::modificar(vector<Contacto> &c, string dni) {
	bool enc = false;	//Guarda si el usuario ha sido encontrado, por defecto false
    Contacto aux;		//Objeto contacto auxiliar para almacenar los nuevos datos

    for(int i = 0; i < c.size(); i++) {
    	if(c[i].getDni() == dni) {
    		enc = true;		//Usuario encontrado

    		//Para modificar cualquier campo es necesario que el usuario escriba los datos por los que sera reemplazado,
			//de lo contrario no se actualizara el campo
			std::cout << "Deja el campo vacio si no lo quieres modificar";

			//Modificar nombre
			std::cout << "Nombre: ";
			getline(std::cin, aux._nombre);
			if(!aux._nombre.empty())
				c[i].setNombre(aux._nombre);

			//Modificar apellidos
			std::cout << "Apellidos: ";
			getline(std::cin, aux._apellidos);
			if(!aux._apellidos.empty())
				c[i].setApellidos(aux._apellidos);

			//Modificar DNI
			std::cout << "DNI: ";
			getline(std::cin, aux._dni);
			if(!aux._dni.empty())
				c[i].setDni(aux._dni);

			//Modificar telefono
			std::cout << "Telefono movil: ";
			getline(std::cin, aux._telefono);
			if(!aux._telefono.empty())
				c[i].setTelefono(aux._telefono);

			//Modificar email
			std::cout << "Email peronal: ";
			getline(std::cin, aux._email);
			if(!aux._email.empty())
				c[i].setEmail(aux._email);

			//Modificar direccion
			std::cout << "Direccion: ";
			getline(std::cin, aux._direccion);
			if(!aux._direccion.empty())
				c[i].setDireccion(aux._direccion);
    	}
    }
    //Devuelve el resultado de la modificacion
    return enc;
}

//El vecto de contactos se pasa por referencia para ser modificado desde la funcion
void Agenda::ordenar(vector<Contacto> &c) {
	//Ordena los objetos contacto del vector
	sort(c.begin(), c.end());
}
