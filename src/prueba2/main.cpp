//
//  main.cpp
//  prueba2
//
//  Created by Antonio Maestre Rosa on 9/1/15.
//  Copyright (c) 2015 Antonio Maestre Rosa. All rights reserved.
//

#include <iostream>
#include "agenda.h"
#include "contacto.h"
#include "gestorDBFichero.h"


int main(int argc, const char * argv[]) {
	
	int opc;
	Contacto aux;
	Agenda ag;
	string fichero,nombre,apellidos,telefono,dni,direccion;
	vector<Contacto> contactos;
	vector<Contacto>::const_iterator it;
	
	while (opc!=10) {
		cout<<"---------------------------------------------\n";
		cout<<"\t-0. Insertar cliente\n";
		cout<<"\t-1. Eliminar cliente\n";
		cout<<"\t-2. Modificar cliente\n";
		cout<<"\t-3. Mostrar\n";
		cout<<"\t-4. Buscar por nombre\n";
		cout<<"\t-5. Buscar por apellidos\n";
		cout<<"\t-6. Guardar en fichero\n";
		cout<<"\t-7. Cargar desde fichero\n";
		cout<<"\t-10. Salir\n";
		cout<<"---------------------------------------------\n";
		std::cin>>opc;
		
		switch (opc) {
			case 1:
				cout<<"Se ha introducido la opcion introducir contacto"<<endl;
				cout<<"Introduzca el nombre"<<endl;
				//getchar();
				cin>>nombre;
				cout<<"Introduzca los apellidos"<<endl;
				getchar();
				getline(cin,apellidos);
				cout<<"Introduzca el telefono"<<endl;
				cin>>telefono;
				cout<<"Introduzca el dni"<<endl;
				cin>> dni;
				cout<<"Introduzca la dirección"<<endl;
				getchar();
				getline(cin,direccion);
				
				aux.setNombre(nombre);
				aux.setApellidos(apellidos);
				aux.setDni(dni);
				aux.setTelefono(telefono);
				aux.setDireccion(direccion);
				ag.insertar(aux);
				
				cout<<"Contacto guardardo"<<endl;
				break;

			case 2:
				cout<<"Se ha introducido la opcion eliminar contacto"<<endl;
				cout<< "< No implementada > "<<endl;
				break;
			case 3:
				cout<< "Se ha introducido la opcion mostrar cliente"<<endl;
				for (it=contactos.begin(); it!=contactos.end(); it++) {
					//puts("entra");
					cout<<"Nombre:"<<it->getNombre()<<endl;
					cout<<"Apellidos:"<<it->getApellidos()<<endl;
					cout<<"Telefono:"<<it->getTelefono()<<endl;
					cout<<"DNI:"<<it->getDni()<<endl;
					cout<<"Direccion:"<<it->getDireccion()<<endl;
					
					
				
				
				}
				//cout<< "< No implementada > "<<endl;
				break;
			case 4:
				cout<< "Se ha introducido la opcion mostrar"<<endl;
				cout<< "< No implementada > "<<endl;
				break;
			case 5:
				cout<< "Se ha introducido la opcion buscar por nombre"<<endl;
				cout<< "< No implementada > "<<endl;
				break;
			case 6:
				cout<<"Se ha seleccionado la opción Guardar la agenda"<<endl;
				cout<<"Introduzca el fichero en el cual quiere guardar la agenda"<<endl;
				getchar();
				getline(cin,fichero);
				guardar(ag.getContactos(),fichero);
				cout<< "Guardando los contactos de la agenda en un fichero"<<endl;
				break;
			case 7:
				cout<< "Se ha seleccionado la opción Cargar la agenda desde un fichero"<<endl;
				cout<< "Introduzca el fichero del cual quiere cargar la agenda"<<endl;
				getchar();
				getline(cin,fichero);
				cargar(contactos,fichero);
				ag.setContactos(contactos);
				cout<< "Cargando los datos desde fichero"<<endl;
				break;
			default:
				std::cout<<"No se ha introducido ninguna opción valida"<<std::endl;
			break;
		}
	}
	
    return 0;
}
