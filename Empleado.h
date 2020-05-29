#include "Tareas.h"
#include <iostream>
using namespace std;
#ifndef EMPLEADO_H
#define EMPLEADO_H

class Empleado
{
	private:
		string nombre;
		int edad , nivel , phabilidad , ppereza;
		Tareas*  tarea = NULL;
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
		Tareas* getTarea();
		void setTarea(Tareas*);
		bool haceonolatarea();
	protected:
};

#endif
