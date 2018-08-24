#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int menu (){
   int opcion = 0;
   while (true){
  	cout<<" BIENVENIDO! Que desea hacer?" << endl
	<< "1. Entrar Restaurante" << endl
	<< "2. Salir" << endl;
	cin >> opcion;

	if (opcion < 1 || opcion > 2)
	   cout<<"Opcion incorrecta, intente de nuevo."<<endl;
	else 
	   return opcion;
}
}


int main (){
	int opcion = 0;
	while (opcion != 2){
		switch (opcion = menu()){
			case 1:
				ejercicio1();
			break;


		}
	 }
	return 0;
};
