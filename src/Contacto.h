/*
 * Contacto.h
 *
 *  Created on: 04/12/2014
 *      Author: i42ditac
 */

#ifndef CONTACTO_H_
#define CONTACTO_H_

struct telefonos {
	int fijo;
	int movil;
};

struct emails {
	std::string personal;
	std::string trabajo;
};

class Contacto {
	private:
		std::string _nombre;
		std::string _apellidos;
		std::string _dni;
		telefonos _telefono;
		emails _email;

public:
	Contacto();
	virtual ~Contacto();
};

#endif /* CONTACTO_H_ */
