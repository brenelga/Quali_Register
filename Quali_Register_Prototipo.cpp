/*
Galicia Aguilar Jesus Brenel
5123280006
1 A
TSU en Desarrollo y Gestion de Software
*/
#include<string>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main() {
	int calif, grado, inicio, menu; //Variables que nos guardaran las calificaciones, el grado al que le dará clase y las opciones del menu
	short matricula; //Aqui se guardará la matrícula del alumno
	string ApAl, AmAl, nAl, ApM, AmM, Nm, Evid, Asig, user, password, resp;//Apellido Materno,Paterno,Nombre del Alumno; Apellido Paterno,Materno y Nombre del Maestro; Evidencia, Asignatura, usuario y contraseña
	char grupo; //Grupo
	do{
		cout<<"----------------------------- \n";
		cout<<"-Bienvenido a Quali-Register- \n";
		cout<<"----------------------------- \n";
		cout<<"\n";
		cout<<"Menu Principal";
		cout<<"1: Registro de Usuarios \n";
		cout<<"2: Inicio de Sesion \n";
		cout<<"3: Ayuda \n"
		cout<<"4: Datos de Contacto \n";
		cout<<"5: salir \n";
		cin>>menu;
		switch(menu){
			case 1:
				cout<<"Ingrese su primer apellido \n";
				cin>>ApM;
				cout<<"Ingrese su segundo apellido \n";
				cin>>AmM;
				cout<<"Ingrese su nombre \n";
				cin>>Nm;
				cout>>"Ingrese su user \n";
				cin>>user;
				cout<<"Ingrese su password \n";
				cin>>password;
				cout<<"Usuario creado de manera exitosa \n";
			break;
			case 2:
				cout<<"Ingrese su usuario \n";
				cin>>user;
				cout<<"Ingrese su password \n";
				cin>>password;
				if(user==user && password==password){
					do{
					cout<<"Bienvenido "<<user<<"\n";
					cout<<"--------------------------------- \n";
					cout<<"--------Menu Principal----------- \n";
					cout<<"--------------------------------- \n";
					cout<<"1: Registrar Alumno \n";
					cout<<"2: Registrar Evidencia \n";
					cout<<"3: Asignar Calificacion \n";
					cout<<"4: Ayuda \n";
					cout<<"Que desea hacer \n";
					cin>>inicio;
					switch (inicio){
						case 1:
							do{
								cout<<"--Registro de Estudiantes-- \n";
								cout<<"-------Quali-Register------- \n";
								cout<<"\n";
								cout<<"Ingrese el primer apellido \n";
								cin>>ApAl;
								cout<<"Ingrese el segundo apellido \n";
								cin>>AmAl;
								cout<<"Ingrese el nombre \n";
								cin>>nAl;
								cout<<"Ingrese el grado \n";
								cin>>grado;
								cout<<"Ingrese el grupo \n";
								cin>>grupo;
								cout<<"Registro guardado de manera exitosa \n";
								cout<<"Desea realizar otro registro \n";
								cout<<"si \n";
								cout<<"no \n";
								cin>>resp;
							} while (resp=="si" || resp=="Si" || resp=="SI" || resp=="sI");
						break;
						case 2:
							do{
								cout<<"--Registro de Evidencias-- \n";
								cout<<"------Quali-Register------ \n";
								cout<<"\n";
								cout<<"Ingresa el titulo de la evidencia \n";
								cin>>Evid;
								cout<<"Ingresa la asignatura \n";
								cin>>Asig;
								
							}
					}
					}
				}
			break;
		}
	}
}
