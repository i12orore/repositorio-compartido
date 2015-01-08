#include "BuscarFavorito.h"

void BuscarFavoritos()
{
	int i,f=0;
	for(i=0;i<_contactos.size();i++)
	{
		if(_contactos.favorito==1)
		{
			f=1;
			std::cout<<"Nombre: "<<getNombre()<<endl;
			std::cout<<"Apellidos: "<<getApellidos()<<endl;
			std::cout<<"DNI: "<<getDNI()<<endl;
			//cout<<"Telefono fijo: "<<get
			std::cout<<"Direcciones: "<<getDirecciones()<<endl;
			std::cout<<"Redes: "<<getRedes()<<enld;

		}
	}
	if(f=0)
	{
		cout<<"No hay ningun contacto favorito"<<enld;
	}


}
