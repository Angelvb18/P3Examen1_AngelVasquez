#include "Empleado.h"
#include "Tareas.h"
#include <iostream>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void listarEmpleado(vector<Empleado*>);
void menu();
void listarTareas(vector<Tareas*>);
int main() {
	menu();
	return 0;
}

void menu(){	
     vector <Empleado*> listaEmpleados;
     vector <Tareas*> backlog;
	int op;
	do{
		cout << "1. Contratar Empleado\n2. Despedir Empleado\n3. Listar Empleados\n4. Crear Tarea\n5. Listar Tareas\n6. Iniciar proyecto\n7. Salir\n:";
		cin >> op;
		switch(op){
			case 1:{
				listaEmpleados.push_back(new Empleado());
				break;
			}
			case 2:{
			    if(listaEmpleados.size() == 0){
			    	cout << "Debe contratar empleados para despedirlos" << endl;
				} else{
					int poemd;
					listarEmpleado(listaEmpleados);
					cout << "Ingrese posicion del empleado a despedir:";
					cin >> poemd;
					if(poemd >= listaEmpleados.size() || poemd < 0){
						cout << "Ingreso incorreto" << endl;
					}else{
						delete listaEmpleados[poemd] ;
						listaEmpleados.erase(listaEmpleados.begin() + poemd);
					}
				}
				
				break;
			}
			case 3:{
				if(listaEmpleados.size() == 0){
			    	cout << "No hay que listar" << endl;
				} else{
					listarEmpleado(listaEmpleados);
				}
				break;
			}
			case 4:{
				backlog.push_back(new Tareas());
				break;
			}
			case 5:{
				if(backlog.size() == 0){
			    	cout << "No hay que listar" << endl;
				} else{
					listarTareas(backlog);
				}
				break;
			}
			case 6:{
				
				break;
			}
			case 7:{
				cout << "Adios" << endl;
				break;
			}
			default:{
				
				cout << "Opcion no valida" << endl;
				break;
			}
		}
	}while(op!=7);
}
void listarEmpleado(vector<Empleado*>lista){
	for(int i = 0 ; i < lista.size() ; i++){
		cout <<i<<"."<< lista[i]->toString() << endl;
	}
}
void listarTareas(vector<Tareas*>lista){
	for(int i = 0 ; i < lista.size() ; i++){
		cout <<i<<"."<< lista[i]->getDescipcion() << " Nivel:"<< lista[i]->getNivel() << " Carga:"<< lista[i]->getCarga()<< endl;
	}
}

