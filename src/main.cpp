/*

	Realizado por José Enrique Ortega

	Funcion Main y menu de implementación


*/
#include "Agenda.h"
#include "Contacto.h"
#include "GestorDBFichero.h"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>

using namespace std;
int main()
{
	int opcion;
	Contacto aux;
	Contacto aux2(aux);
	Agenda ag;
	string fichero,nombre,apellidos,dni,direccion,telefono;
	vector <Contacto> contactos;
	//vector<Contacto> c;

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
		cout<<"\t-8. Ordenar contactos por apellido\n";
		cout<<"\t-10. Salir\n";
		cout<<"---------------------------------------------\n";
		cin>>opcion;
		switch(opcion)
		{
			case 0:
				
				/*aux.introducirDatos();
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
				aux.setDireccion(direccion);*/
				aux.introducirDatos();
				//aux2.insertar(aux);
				ag.insertar(aux);
				break;
			case 1:
				cout<<"Introduce dni del contacto que deseas eliminar"<<endl;
				cin>>dni;
				aux2.setContactos(borrar(dni,aux2.getContactos()));
				//ag.setContactos(borrar(dni,ag.getContactos()));
				break;
			case 2:
				string d;
				cout << "Introduce el DNI del usuario a modificar";
				cin >> d;

				//Agenda a;
				//vector<Contacto> c;
				bool m;

				contactos = ag.getContactos();
				ag.modificar(contactos, d);

				(m) ? cout << "Usuario modficado" : cout << "Usuario no encontrado";
				break;
			case 4:
				cout<<"Introduce el apellido del contacto que deseas buscar"<<endl;
				cin>>apellidos;
				buscarContacto(apellidos, &aux2)
				break;
			case 5:
				cout<<"Mostrar los contactos favoritos"<<endl;
				BuscarFavoritos(&aux2);
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
			case 8:
				cout << "Ordenando contactos";

				//Agenda a;
				//vector<Contacto> c;

				contactos = ag.getContactos();
				ag.ordenar(contactos);

				cout << "Contactos ordenados";
				break;
			default:
				cout<<"No se ha introducido ninguna opción válida"<<endl;
				
		}


	}
	return 0;

}
