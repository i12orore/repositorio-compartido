//
//  guardar.h
//  
//
//  Created by Antonio Maestre Rosa on 7/1/15.
//
//

#ifndef ____guardar__
#define ____guardar__

#include <Agenda.h>

void guardar(const vector<Contacto> &_vector_contactos, string fichero);
void cargar(vector<Contacto> & _vector_contactos, string fichero);
bool existeFichero(string fichero);
#endif /* defined(____guardar__) */
