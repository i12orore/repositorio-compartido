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
	return a._apellidos < b._apellidos;
}
