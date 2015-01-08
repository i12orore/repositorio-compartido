//
//  guardar.h
//  
//
//  Created by Antonio Maestre Rosa on 7/1/15.
//
//

#ifndef ____guardar__
#define ____guardar__

#include "Agenda.h"

void guardar(const std::vector<Contacto> &_vector_contactos, std::string fichero);
void cargar(std::vector<Contacto> & _vector_contactos, std::string fichero);
bool existeFichero(std::string fichero);
#endif /* defined(____guardar__) */
