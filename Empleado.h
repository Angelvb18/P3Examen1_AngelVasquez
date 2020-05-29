#include <iostream>
#include<string>
using  std:: cout;
using  std::cin;
using  std::endl;
using  std::string;
#ifndef EMPLEADO_H
#define EMPLEADO_H

class Empleado
{
	private:
		string nombre;
		int edad , nivel , phabilidad , ppereza;
	public:
		 Empleado();
		~Empleado();
		string getNombre();
		int getEdad();
		int getNivel();
		int getHabilidad();
		int getPereza();
		void setEdad();
		void setNivel();
		void setHabilidad();
		void setPereza();
		void setNombre();
		string toString();
		
	protected:
};

#endif
