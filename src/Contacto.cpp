/*
 * Contacto.cpp
 *
 *  Created on: 08/01/2015
 *      Author: José Enrique Ortega Ortega
 */

#include "Contacto.h"

Contacto::Contacto() {
	// TODO Auto-generated constructor stub

}

Contacto::~Contacto() {
	// TODO Auto-generated destructor stub
}

//Metodo operator< sobrecargado para que la funcion sort ordene por apellidos
bool operator<(const Contacto &a, const Contacto &b) {
	//Si el apellido a es "menor" al apellido b, devuelve true, de lo contrario devuelve false
	return a.getApellidos() < b.getApellidos();
}

void Contacto::introducirDatos()
{
	string nombre,apellidos,dni,telefono,direccion,email;
	
	cout<<"Introduce el nombre:"<<endl;
	getchar();
	getline(cin,nombre);
	cout<<"Introduce los apellidos:"<<endl;
	getchar();
	getline(cin,apellidos);
	cout<<"Introduce el telefono:"<<endl;
	cin>>telefono;
	cout<<"Introduce el DNI:"<<endl;
	cin>>dni;
	cout<<"Introduce la direccion:"<<endl;
	getchar();
	getline(cin,direccion);
	cout<<"Introduzca el e-mail:"<<endl;
	cin>>email;
	
	setNombre(nombre);
	setApellidos(apellidos);
	setDni(dni);
	setEmail(email);
	setTelefono(telefono);
	setDireccion(direccion);
}
