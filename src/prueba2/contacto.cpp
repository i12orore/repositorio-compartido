//
//  prueba.cpp
//  prueba2
//
//  Created by Antonio Maestre Rosa on 9/1/15.
//  Copyright (c) 2015 Antonio Maestre Rosa. All rights reserved.
//

#include "contacto.h"

using namespace std;

Contacto introducirContacto()
{
	Contacto aux;
	string nombre,apellidos,telefono,dni,direccion;
	
	
	cout<<"Introduzca el nombre"<<endl;
	cin>>nombre;
	cout<<"Introduzca los apellidos"<<endl;
	getline(cin,apellidos);
	cout<<"Introduzca el telefono"<<endl;
	cin>>telefono;
	cout<<"Introduzca el dni"<<endl;
	cin>> dni;
	cout<<"Introduzca la direccion"<<endl;
	cin>> direccion;
	
	aux.setNombre(nombre);
	aux.setApellidos(apellidos);
	aux.setDni(dni);
	aux.setTelefono(telefono);
	aux.setDireccion(direccion);
	
	return aux;
}

void MostrarContacto (const Contacto c)
{
	cout<<"Nombre:"<<c.getNombre()<<endl;
	cout<<"Apellidos:"<<c.getApellidos()<<endl;
	cout<<"telefono:"<<c.getTelefono()<<endl;
	cout<<"dni:"<<c.getDni()<<endl;
	cout<<"Direccion:"<<c.getDireccion()<<endl;
}