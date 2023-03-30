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
	string ApAl, AmAl, nAl, ApM, AmM, Nm, Evid, Asig, user, password;//Apellido Materno,Paterno,Nombre del Alumno; Apellido Paterno,Materno y Nombre del Maestro; Evidencia, Asignatura, usuario y contraseña
	char grupo; //Grupo
	cout << "----Bienvenido a Quali-Register----\n";//Mensaje de Bienvenida
	cout << "-----V.0.0.1----- \n"; //Version
	cout << "Seleccione una opcion \n"; //Inicio de menu
	cout << "1: Primer Uso \n"; //Opcion 1 Menu
	cout << "2: Ya estoy registrado \n"; //Opcion 2 Menu
	cin >> inicio; //Ingresa las opciones
	switch (inicio) { //Dependiendo de la opcion que ingrese el usuario, se hará lo siguiente
	case 1: //Registra el nuevo usuario, esto se hará cuando se use por primera vez
		cout << "Ingrese su Primer Apellido \n";
		cin >> ApM;
		cout << "Ingrese su Segundo Apellido \n";
		cin >> AmM;
		cout << "Ingrese su nombre \n";
		cin >> Nm;
		cout << "Ingrese su usuario \n";
		cin >> user;
		cout << "Ingrese su password \n";
		cin >> password;
		cout << "Registro guardado de manera exitosa \n";
		break;
	case 2: //Si ya está registradio, iniciará sesión
		cout << "Ingrese su usuario \n";
		cin >> user;
		cout << "Ingrese su contraseña \n";
		cin >> password;
		if (user == user && password == password) {
			cout << "Datos correctos \n";
			do {
				cout<< "Bienvenido" << user << "\n";
				cout<<"Menu Principal \n";
				cout<<"1: Registro de Alumno \n";
				cout<<"2: Registro de Evidencia \n";
				cout<<"3: Asignar Calificacion \n";
				cin>>menu;
				switch(menu){
					case 1:
						cout<<"Ingrese el primer apellido \n";
						cin<<
				}
			} while (inicio == 0);
		}
		break;
	}
}
