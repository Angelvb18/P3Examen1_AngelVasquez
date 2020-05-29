#include "Tareas.h"

Tareas::Tareas()
{
	setDescipcion();
	setCarga();
	setNivel();
}

Tareas::~Tareas()
{
}
string Tareas::getDescipcion(){
	return descipcion;
}
int Tareas::getNivel(){
	return nivel;
}
int Tareas::getCarga(){
	return carga;
}
void Tareas::setDescipcion(){
	cout << "Ingrese Descripcion:";
	cin >> descipcion;
}
void Tareas::setNivel(){
	do{
		cout << "Ingrese Nivel (1,2 o 3):";
		cin >> nivel;
	}while(nivel < 1 || nivel > 3);
}
void Tareas::setCarga(){
	cout << "Ingrese Carga:";
	cin >> carga;
}
void Tareas::setCarga(int c){
	carga = c;
}
