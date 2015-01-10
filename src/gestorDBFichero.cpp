//
//  gestorDBFichero.cpp
//  prueba2
//
//  Created by Antonio Maestre Rosa on 9/1/15.
//  Copyright (c) 2015 Antonio Maestre Rosa. All rights reserved.
//

#include "GestorDBFichero.h"



#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void guardar(const vector<Contacto> &_contactos,string fichero)
{
	vector<Contacto>::const_iterator it; //Declaración de iterador const_iterator it para recorrer el vector
	
	//Declaración del flujo de salida
	ofstream flujoSalida;
	//Se abre el fichero para escribir
	flujoSalida.open(fichero.c_str(),ios::out);
	
	//El fichero se ha abierto correctamente
	if(flujoSalida)
	{
		for (it=_contactos.begin();it!=_contactos.end() ; it++) { //Recorremos el vector
			
			//Guardamos cada contacto en el fichero
			flujoSalida<<it->getNombre()<<endl;		//Nombre
			flujoSalida<<it->getApellidos()<<endl;		//Apellidos
			flujoSalida<<it->getTelefono()<<endl;		//Telefono
			flujoSalida<<it->getDni()<<endl;		//DNI
			flujoSalida<<it->getEmail()<<endl;		//E-mail
			flujoSalida<<espacio2caracter(it->getDireccion())<<endl;	//Direccion

			
			
			
		}
		flujoSalida.close(); //Cerramos el fichero
	}
	else
	{
		cout<<"Error en la apertura del fichero"<<endl;
		exit(-1);
	}
}

void cargar(vector<Contacto> & contactos, string fichero)
{
	Contacto aux;
	ifstream flujoEntrada; //Declaración del flujo de entrada
	flujoEntrada.open(fichero.c_str(),ios::in);//Se abre el fichero para leer
	string nombre,apellido1,apellido2,apellidos,dni,telefono,direccionsF,direccion,email;
	
	
	if(flujoEntrada)
	{
		while (flujoEntrada)//Mientras no se llegue al final del fichero
		{
			flujoEntrada>>nombre;
			flujoEntrada>>apellido1;
			flujoEntrada>>apellido2;
			flujoEntrada>>telefono;
			flujoEntrada>>dni;
			flujoEntrada>>email;
			flujoEntrada>>direccionsF;
			//flujoEntrada.getline(direccionsF,30);
			
			//Filtramos la direccion para quitar los '_' y poner ' '.
			//direccion=caracter2espacio(direccionsF);
			//Los apellidos serán el apellido1 y el apellido 2
			apellidos=apellido1+" "+apellido2;
			//Introducimos los datos en el objeto de tipo Contacto aux
			aux.setNombre(nombre);
			aux.setApellidos(apellidos);
			aux.setTelefono(telefono);
			aux.setDni(dni);
			aux.setDireccion(direccion);
			aux.setEmail(email);
			//Insertamos el contacto leido en el vector
			contactos.push_back(aux);
			
		}
		//Cerramos el fichero
		flujoEntrada.close();
	}
}


/*----------------------------------------------------------------------
 
 Funciones auxiliares
 
 ----------------------------------------------------------------------*/
bool existeFichero(string fichero)
{
	ifstream flujoEntrada; //Declaración del flujo de entrada
	flujoEntrada.open(fichero.c_str(),ios::in);//Se abre el fichero para leer
	
	if(flujoEntrada)
		return true;
	else
		return false;
	
}
string espacio2caracter(string x)
{
	for(int i=0;i<x.size();i++)
	{
		if(x[i]==' ')
			x[i]='_';
	}
	return x;
}
string caracter2espacio(string x)
{
	for(int i=0;i<x.size();i++)
	{
		if(x[i]=='_')
			x[i]=' ';
	}
	return x;
}



