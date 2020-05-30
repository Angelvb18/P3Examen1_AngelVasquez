#include "Empleado.h"
#include <stdlib.h>
#include <time.h>
Empleado::Empleado()
{
	setNombre();
	setEdad();
	setNivel();
	setHabilidad();
	setPereza();
}

Empleado::~Empleado()
{
	
	
}
string Empleado::getNombre(){
	return nombre;
}
int Empleado::getEdad(){
	return edad;
}
int Empleado::getNivel(){
	return nivel;
}
int Empleado::getHabilidad(){
	return phabilidad;
}
int Empleado::getPereza(){
	return ppereza;
}
void Empleado::setEdad(){
	cout << "Ingrese edad:";
	cin >> edad; 
}
void Empleado::setNivel(){
	do{
		cout << "Ingrese Nivel (1,2 o 3):";
		cin >> nivel;
	}while(nivel < 1 || nivel > 3);
}
void Empleado::setHabilidad(){
	do{
		cout << "Ingrese porcentaje habilidad(Entre 1 y 100):";
		cin >> phabilidad;
	}while(phabilidad < 1 || phabilidad > 100);
}
void Empleado::setPereza(){
	do{
		cout << "Ingrese porcentaje pereza(Entre 1 y 100):";
		cin >> ppereza;
	}while(ppereza < 1 || ppereza > 100);
}
void Empleado::setNombre(){
	cout << "Ingrese nombre:";
	cin >> nombre;
}
string Empleado::toString(){
	return nombre;
}
Tareas* Empleado::getTarea(){
	return tarea;
}
void Empleado::setTarea(Tareas* t){
	if(t != NULL){
		tarea = t;
	}else{
		delete tarea;
	}
	
}
int  Empleado::haceonolatarea(){
	int siono= 0;
	int pereza = rand() % 101;
	if(ppereza < pereza){
		int habilidad = rand()  % 101;
		if(phabilidad >= habilidad){
			siono = 3 ;
		}
		else{
			siono = 2;
		}
	}else{
		return 1;
	}
	return siono;
}
