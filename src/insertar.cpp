#include"Agenda.h"
#include"Contacto.h"
#include<vector>
#include<string>
#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
//Insertar un contacto al final de la agenda
void Agenda::insertar(Contacto _contactos)
{
	Contacto aux;
		cout<<"Introduce el nombre de la persona"<<endl;
		getline(cin,aux._nombre);
		cout<<"Introduce los apellidos de la persona"<<endl;
		getline(cin,aux._apellidos);
		cout<<"Introduce el DNI de la persona"<<endl;
		getline(cin,aux._dni);
		cout<<"Introduce el telefono de la persona"<<endl;
		cin>>aux._telefono;
		cout<<"Introduce la direccion de la persona"<<endl;
		getline(cin,aux._direccion);

		_contactos.push_back(aux);

}


//Borrar por apellido
void Agenda::borrar(Contacto _contactos)
{
	buscarContacto()
	_contactos.pop_back(aux);
}