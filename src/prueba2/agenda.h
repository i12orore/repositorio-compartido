//
//  agenda.h
//  prueba2
//
//  Created by Antonio Maestre Rosa on 9/1/15.
//  Copyright (c) 2015 Antonio Maestre Rosa. All rights reserved.
//

#ifndef prueba2_agenda_h
#define prueba2_agenda_h

#include "contacto.h"
#include <vector>
#include <iostream>
#include <cstdio>
#include <cstdlib>


using namespace std;

class Agenda:public Contacto{
	
private:
	vector <Contacto> _vectorContactos;
public:
	Agenda(){};
	//~Agenda();
	
	inline void setContactos(vector<Contacto> vector)
	{
		_vectorContactos=vector;
	}
	inline vector<Contacto> getContactos()const
	{
		return _vectorContactos;
	}
	
	void insertar(Contacto aux)
	{
		_vectorContactos.push_back(aux);
	}
	void imprimir(const Contacto &c)
	{
		cout<<"*--------------------------------------*\n";
		cout<<"Nombre: "<<c.getNombre()<<"\n";
		cout<<"Apellidos: "<<c.getApellidos()<<"\n";
		cout<<"DNI: "<<c.getDni()<<"\n";
		cout<<"Télefono: "<<c.getTelefono()<<" \n";
	}
	
};

//void imprimir(const Contacto &c);
#endif
