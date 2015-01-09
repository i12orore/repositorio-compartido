/*

	Realizado por José Enrique Ortega

	Funcion Main y menu de implementación


*/
#include "Agenda.h"
#include "Contacto.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;
main()
{
	int opcion;
	Contacto aux();
	Contacto aux2(aux);

	while(opcion!=10)
	{
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
		cin>>opcion;
		switch(opcion)
		{
			case 0:
				getchar();
				cout<<"Introduce el nombre de la persona\n";
				getline(cin,nombre);
				cout<<"Introduce los 2 apellidos\n";
				getline(cin,apellidos);
				cout<<"Introduce el dni\n";
				cin>>dni;
				cout<<"Introduce el telefono\n";
				cin>>telefono;
				cout<<"Introduce la direccion completa\n";
				getchar();
				getline(cin,direccion);

				aux.setNombre(nombre);
				aux.setApellidos(apellidos);
				aux.setDni(dni);
				aux.setTelefono(telefono);
				aux.setDireccion(direccion);
				aux2.insertar(aux);
				break;
			case 1:
				cout<<"Introduce dni del contacto que deseas eliminar"<<endl;
				cin>>dni;
				aux2.setContactos(borrar(dni,aux2.getContactos()));
				break;
			case 4:
				cout<<"Introduce el apellido del contacto que deseas buscar"<<endl;
				cin>>apellido;
				buscarContacto(apellido, &_aux2)
				break;
			case 4:
				cout<<"Mostrar los contactos favoritos"<<endl;
				BuscarFavoritos(&_aux2);
				break;		
		}














	}

}
