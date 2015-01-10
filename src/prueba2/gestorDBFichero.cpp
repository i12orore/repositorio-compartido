//
//  gestorDBFichero.cpp
//  prueba2
//
//  Created by Antonio Maestre Rosa on 9/1/15.
//  Copyright (c) 2015 Antonio Maestre Rosa. All rights reserved.
//

#include "gestorDBFichero.h"



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
	ofstream flujoSalida;
	
	flujoSalida.open(fichero.c_str(),ios::out);//Se abre el fichero para escribir
	//File * flujoSalida;
	
	if(flujoSalida) //El fichero se ha abierto correctamente
	{
		for (it=_contactos.begin();it!=_contactos.end() ; it++) { //Recorremos el vector
			flujoSalida<<it->getNombre()<<endl;  //Guardamos cada contacto en el fichero
			flujoSalida<<it->getApellidos()<<endl;
			flujoSalida<<it->getTelefono()<<endl;
			flujoSalida<<it->getDni()<<endl;
			flujoSalida<<espacio2caracter(it->getDireccion())<<" \n";

			//flujoSalida<<it->getDireccion()<<endl;
			//flujoSalida<<endl<<"---------------------------"<<endl;
			
			
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
	//vector<Contacto>::iterator it;
	Contacto aux;
	ifstream flujoEntrada; //Declaración del flujo de entrada
	flujoEntrada.open(fichero.c_str(),ios::in);//Se abre el fichero para leer
	string nombre,apellido1,apellido2,apellidos,dni,telefono,direccionsF,direccion;
	//int dni,telefono;
	
	if(flujoEntrada)
	{
		//Se lee el primero
		//flujoEntrada!=flujoEntrada.feof()
		//flujoEntrada.getline(nombre, sizeof(string));
		while (flujoEntrada)//Mientras no se llegue al final del fichero
		//while(flujoEntrada)
		{
			flujoEntrada>>nombre;
			//flujoEntrada.getline(apellidos,100,'\n');
			//getchar();
			flujoEntrada>>apellido1;
			flujoEntrada>>apellido2;
			//getline(flujoEntrada, apellidos);
			//cout<<"Apellidos"<<apellidos<<endl;
			flujoEntrada>>telefono;
			flujoEntrada>>dni;
			flujoEntrada>>direccionsF;
			//flujoEntrada>>
			direccion=caracter2espacio(direccionsF);
			//cout<<"Direccion:"<<direccion<<endl;
			
			apellidos=apellido1+" "+apellido2;
			
			aux.setNombre(nombre);
			aux.setApellidos(apellidos);
			aux.setTelefono(telefono);
			aux.setDni(dni);
			aux.setDireccion(direccion);
			
			contactos.push_back(aux);   //Se inserta el contacto leido en el vector
			//flujoEntrada.read((char *) (&aux), sizeof(Contacto));  //Se lee el siguiente
		}
		
		flujoEntrada.close();  //Cerramos el fichero
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



