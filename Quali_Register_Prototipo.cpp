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
	do{
		cout<<"----------------------------- \n";
		cout<<"-Bienvenido a Quali-Register- \n";
		cout<<"----------------------------- \n";
		cout<<"\n";
		cout<<"Menu Principal";
		cout<<"1: Registro de Usuarios \n";
