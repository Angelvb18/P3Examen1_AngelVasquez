#include "Empleado.h"
#include "Tareas.h"
#include <iostream>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu( vector<Empleado*>& , vector<Tareas*>& ,int&, double&);
void menu2( vector<Empleado*>& , vector<Tareas*>& ,double&);
void listarEmpleado(vector<Empleado*>);
double calculoN(vector<Tareas*>);

void listarTareas(vector<Tareas*>);
int main() {
	vector <Empleado*> listaEmpleados;
    vector <Tareas*> backlog;
    int incioproyecto = 0;
    double N=0.0;
    while(incioproyecto != 7){
    	if(incioproyecto == 0){
				menu(listaEmpleados,backlog,incioproyecto,N);
		}else{
			  	menu2(listaEmpleados,backlog,N);
		}
	}
    
	
	return 0;
}

void menu(vector<Empleado*>& listaEmpleados, vector<Tareas*>& backlog,int& incioproyecto,double& N){	
     
	int op;
	
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
				if(incioproyecto == 1){
					cout << "No se puede agregar mas tareas ya que se incio el proyecto" << endl;
				}else{
					backlog.push_back(new Tareas());
				}
				
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
				if(incioproyecto == 0){
					incioproyecto = 1;
					N = calculoN(backlog);
				}
				
				break;
			}
			case 7:{
				incioproyecto = 7;
				cout << "Adios" << endl;
				break;
			}
			default:{
				
				cout << "Opcion no valida" << endl;
				break;
			}
		}
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
double calculoN(vector<Tareas*>lista){
	int carga=0;
	for(int i = 0 ; i < lista.size() ; i++){
		carga+=lista[i]->getCarga();
	}
	cout << "sdsd" << carga << endl;
	return carga+carga*0.20;
}
void menu2( vector<Empleado*>& listaEmpleados, vector<Tareas*>& backlog,double& N){
	int op;
	cout << "1. Siguiente día\n2. Generar reporte\n3. Salir\n:";
	cin >> op;
	switch(op){
		case 1:{
			for(int i = 0 ; i<listaEmpleados.size() ; i++){
				for(int j = 0 ; j < backlog.size() ; j++){
					if(listaEmpleados[i] ->getNivel() >= backlog[j]->getNivel() && listaEmpleados[i] ->getTarea() == NULL){
						listaEmpleados[i] ->setTarea(backlog[j]);
						backlog.erase(backlog.begin() + j);
					}
				}
			}
			for(int i = 0 ; i<listaEmpleados.size() ; i++){
				if(listaEmpleados[i]->haceonolatarea()){
					Tareas* t = listaEmpleados[i]->getTarea();
					t->setCarga(t->getCarga()-1);
					if(t->getCarga() == 0 ){
						listaEmpleados[i]->setTarea(NULL);
					}
					else{
						listaEmpleados[i]->setTarea(t);
					}
					
				}
			}
			
			break;
		}
		case 2:{
			
			break;
		}
		case 3:{
			cout << "Adios";
			break;
		}
	}
	
}

