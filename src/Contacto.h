/*
 * Contacto.h
 *
 *  Created on: 08/01/2015
 *      Author: José Enrique Ortega Ortega
 */

#ifndef CONTACTO_H_
#define CONTACTO_H_

#include <string>
#include "Agenda.h"
#include <vector>
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

class Contacto {

private:

	string _nombre;
	string _apellidos;
	string _direccion;
	string _telefono;
	string _email;
	string _dni;

public:
	Contacto();
	virtual ~Contacto();

	const string& getApellidos() const {
		return _apellidos;
	}

	void setApellidos(const string& apellidos) {
		_apellidos = apellidos;
	}

	const string& getDireccion() const {
		return _direccion;
	}

	void setDireccion(const string& direccion) {
		_direccion = direccion;
	}

	const string& getDni() const {
		return _dni;
	}

	void setDni(const string& dni) {
		_dni = dni;
	}

	const string& getNombre() const {
		return _nombre;
	}

	void setNombre(const string& nombre) {
		_nombre = nombre;
	}

	const string& getTelefono() const {
		return _telefono;
	}

	void setTelefono(const string& telefono) {
		_telefono = telefono;
	}

	const string& getEmail() const {
		return _email;
	}

	void setEmail(const string& email) {
		_email = email;
	}
	
	void introducirDatos();
	//bool operator<(const Contacto &a, const Contacto &b);
};

#endif /* CONTACTO_H_ */
