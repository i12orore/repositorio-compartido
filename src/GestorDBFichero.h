//
//  gestorDBFichero.h
//  prueba2
//
//  Created by Antonio Maestre Rosa on 9/1/15.
//  Copyright (c) 2015 Antonio Maestre Rosa. All rights reserved.
//

#ifndef _GestorDBFichero_h_
#define _GestorDBFichero_h_

#include <stdio.h>

#include "Agenda.h"
#include "Contacto.h"
#include<vector>

using namespace std;


void guardar(const std::vector<Contacto> &_vector_contactos, std::string fichero);
void cargar(std::vector<Contacto> & _vector_contactos, std::string fichero);
bool existeFichero(std::string fichero);
string espacio2caracter(string x);
string caracter2espacio(string x);



#endif /* defined(__prueba2__gestorDBFichero__) */
