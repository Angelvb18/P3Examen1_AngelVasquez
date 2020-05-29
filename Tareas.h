#include <iostream>
using namespace std;
#ifndef TAREAS_H
#define TAREAS_H

class Tareas
{
	private:
		string descipcion;
		int nivel , carga;
	public:
		Tareas();
		~Tareas();
		string getDescipcion();
		int getNivel();
		int getCarga();
		void setDescipcion();
		void setNivel();
		void setCarga();
	protected:
};

#endif
