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
	int calif, grado, inicio, menu, id; //Variables que nos guardaran las calificaciones, el grado al que le dará clase y las opciones del menu
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
								cout<<"Ingrese la matricula \n";
								cin>>matricula;
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
								cout<<"Ingrese el id de la tarea \n";
								cin>>id;
								cout<<"Registro Exitoso \n";
								cout<<"Desea Realizar otro registro \n";
								cout<<"si \n";
								cout<<"no \n";
								cin>>resp;
							} while (resp=="si" || resp=="Si" || resp=="SI" || resp=="sI");
						break;
						case 3:
							do{
								cout<<"--Registro de Calificaciones-- \n";
								cout<<"--------Quali-Register-------- \n";
								cout<<"\n";
								cout<<"Ingrese la matricula del alumno \n";
								cin<<matricula;
								cout<<"Ingrese el id de la tarea \n";
								cin>>id;
								cout<<"Ingrese la calificacion del estudiante \n";
								cin>>calif;
								cout<<"Calificacion guardada \n";
								cout<<"Desea continuar \n";
								cout<<"si \n";
								cout<<"no  \n";
								cin>>resp;
							} while (resp=="si" || resp=="Si" || resp=="SI" || resp=="sI");
						break;
						case 4:
							cout<<"-----------Manual de Usuario----------------- \n";
							cout<<"-----------Menu de Registros----------------- \n";
							cout<<"-------------Quali-Register------------------ \n";
							do{
								cout<<"Seleccione el menu del que desea ayuda \";
								cout<<"1: Registrar Alumno \n";
								cout<<"2: Registrar Evidencia \n";
								cout<<"3: Registrar Calificacion \n";
								cin>>inicio;
								switch (inicio){
									case 1:
										cout<<"----Menu Registrar Alumno---- \n";
										cout<<"\n";
										cout<<"Al acceder a este menu, nos pedira los siguientes datos:  \n";
										cout<<"1: Primer Apellido del Alumno \n";
										cout<<"2: Segundo Apellido del Alumno \n";
										cout<<"3: Nombre del Alumno(Un solo nombre) \n";
										cout<<"4: Matricula, este sera el dato identificador del alumno en la BDD \n";
										cout<<"5: Grado, el cuatrimestre que esta cursando (solo numeros) \n";
										cout<<"6: Grupo, el grupo en el que se encuentra (una sola letra) \n";
									break;
									case 2:
										cout<<"----Menu Registrar Evidencias---- \n";
										cout<<"\n";
										cout<<"Al acceder nos pedira los siguientes datos: \n";
										cout<<"1: El titulo de la actividad \n";
										cout<<"2: La asignatura a la que pertenece \n";
										cout<<"3: id de la actividad, servira para identificar la actividad en la BDD (solo numeros) \n";
									break;
									case 3:
										cout<<"----Menu Registrar Calificacion---- \n";
										cout<<"\n";
										cout<<"Al acceder nos pedira ingresar los siguientes datos: \n";
										cout<<"1: Matricula, nos permitira ubicar al alumno en la BDD \n";
										cout<<"2: id de Evidencia, nos permitirá ubicar al alumno en la BDD \n";
										cout<<"3: Calificacion, la calificacion del alumno \n";
									break;
									default cout<<"Opcion no reconocida, intentelo de nuevo \n";
								}
								cout<<"Quieres intentarlo de nuevo \n";
								cout<<"si \n";
								cout<<"no \n";
								cin>>resp;
							} while (resp=="Si" || resp=="si" || resp=="SI" || resp=="sI");
							break;
							default cout<<"Opcion no reconocida intentelo de nuevo \n";
					}
					cout<<"Quieres intentarlo de nuevo \n";
					cout<<"Si \n";
					cout<<"No \n";
					cin>>resp;
					}while (resp=="Si" || resp=="si" || resp=="sI" || resp=="SI");
				}
			break;
		}
	}
}
