//
//  guardar.cpp
//  
//
//  Created by Antonio Maestre Rosa on 7/1/15.
//
//

#include "guardar.h"

#include <iostream>
#include <fstream>

using namespace std;

void Agenda::guardar(const vector<Contacto> &_vector_contactos, string fichero)
{
    vector<Contacto>::const_iteraror it; //Declaración de iterador const_iterator it para recorrer el vector
    ifstream flujoSalida;
    
    flujoSalida.open(fichero.c_str(),ios::out);//Se abre el fichero para escribir
    
    if(flujoSalida) //El fichero se ha abierto correctamente
    {
        for (it=_vector_contactos.begin();it!=_vector_contactos.end() ; it++) { //Recorremos el vector
                fwrite(*it, sizeof(Contacto),1,fichero);    //Guardamos cada contacto en el fichero
        }
        flujoSalida.close(); //Cerramos el fichero
    }
    else
    {
        cout<<"Error en la apertura del fichero"<<endl;
        exit(-1);
    }
}

void Agenda::cargar(vector<Contacto> & _vector_contactos, string fichero)
{
    //vector<Contacto>::iterator it;
    Contacto aux;

    if(existeFichero(fichero))
    {
        flujoEntrada.read((char *) (&aux), sizeof(Contacto)); //Se lee el primero
        
        while (flujoEntrada!=flujoEntrada.feof())//Mientras no se llegue al final del fichero
        {
            _vector_contactos.push_back(aux);   //Se inserta el contacto leido en el vector
            flujoEntrada.read((char *) (&aux), sizeof(Contacto));  //Se lee el siguiente
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


