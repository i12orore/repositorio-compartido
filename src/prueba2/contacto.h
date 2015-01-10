//
//  prueba.h
//  prueba2
//
//  Created by Antonio Maestre Rosa on 9/1/15.
//  Copyright (c) 2015 Antonio Maestre Rosa. All rights reserved.
//

#ifndef _contacto_h_
#define _contacto_h_

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Contacto{
private:
	string _nombre;
	string _apellidos;
	string _telefono;
	string _dni;
	string _direccion;
	
	
public:
	Contacto()
	{
		
	}
	Contacto(string nombre,string apellidos,string telefono,string dni,string direccion)
	{
		setNombre(nombre);
		setApellidos(apellidos);
		setTelefono(telefono);
		setDni(dni);
		setDireccion(direccion);
		
	}
	Contacto(const Contacto &cont)
	{
		*this=cont;
	}
	
	//~Contacto();
	
	inline void setNombre(string nombre)
	{
		_nombre=nombre;
	}
	inline void setApellidos(string apellidos)
	{
		_apellidos=apellidos;
	}
	inline void setTelefono(string telefono)
	{
		_telefono=telefono;
	}
	inline void setDni(string dni)
	{
		_dni=dni;
	}
	inline void setDireccion(string direccion)
	{
		_direccion=direccion;
	}
	
	inline string getNombre()const
	{
		return _nombre;
	}
	inline string getApellidos()const
	{
		return _apellidos;
	}
	inline string getTelefono()const
	{
		return _telefono;
	}
	inline string getDni()const
	{
		return _dni;
	}
	inline string getDireccion()const
	{
		return _direccion;
	}
	
	//Contacto introducirContacto();
	void MostrarContacto (const Contacto c);
	
	
};





#endif /* defined(__prueba2__prueba__) */

