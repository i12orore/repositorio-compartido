#include "Buscar.h"


void buscarContacto(string apellido)
{
	int i, n=0;

	for(i=0;i<_contactos.size();i++)
	{
		if(apellido==_contactos.apellidos)
		{
			n=1;
			std::cout<<"Nombre: "<<getNombre()<<endl;
			std::cout<<"Apellidos: "<<getApellidos()<<endl;
			std::cout<<"DNI: "<<getDNI()<<endl;
			//cout<<"Telefono fijo: "<<get
			std::cout<<"Direcciones: "<<getDirecciones()<<endl;
			std::cout<<"Redes: "<<getRedes()<<enld;


		}
	}

	if(n==0)
			{
				cout<<"No hay ningún contacto con dicho nombre"<<endl;
			}

}
