#include "Empleado.h"

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
