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
#include <cstdio>
#include <stdio.h>

using namespace std;

void guardar(const vector<Contacto> &_contactos, string fichero)
{
    vector<Contacto>::const_iterator it; //Declaración de iterador const_iterator it para recorrer el vector
    ofstream flujoSalida;
    
    //flujoSalida.open(fichero.c_str(),ios::out);//Se abre el fichero para escribir
    //File * flujoSalida;
    
    if(flujoSalida) //El fichero se ha abierto correctamente
    {
        for (it=_contactos.begin();it!=_contactos.end() ; it++) { //Recorremos el vector
                flujoSalida.write((char*) (&*it), sizeof(Contacto));    //Guardamos cada contacto en el fichero
           
        }
        flujoSalida.close(); //Cerramos el fichero
    }
    else
    {
        cout<<"Error en la apertura del fichero"<<endl;
        exit(-1);
    }
}

void cargar(vector<Contacto> & _contactos, string fichero)
{
    //vector<Contacto>::iterator it;
    Contacto aux;
    ifstream flujoEntrada; //Declaración del flujo de entrada
    flujoEntrada.open(fichero.c_str(),ios::in);//Se abre el fichero para leer

    if(flujoEntrada)
    {
         //Se lee el primero
        //flujoEntrada!=flujoEntrada.feof()
        while (flujoEntrada.read((char *) (&aux), sizeof(Contacto)))//Mientras no se llegue al final del fichero
        {
            _contactos.push_back(aux);   //Se inserta el contacto leido en el vector
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


