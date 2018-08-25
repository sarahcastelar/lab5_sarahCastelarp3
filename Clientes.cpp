#include "Clientes.h"
#include <iostream>
#include <string>
using std::string;
using namespace std;


Clientes::Clientes(string pNombre, int pPromedio, int pDinero, vector<Platos*> pPlatosConsumidos1){
    nombre = pNombre;
    promedio = pPromedio;
    dineroGastado = pDinero;
    platosConsumidos = pPlatosConsumidos1;
}

string Clientes::getNombre(){
    return nombre;
}

int Clientes::getPromedio(){
    return promedio;
}

int Clientes::getDineroGastado(){
    return dineroGastado;
}

void Clientes::getPlatosConsumidos(){
    cout<<"Los platos consumidos son: "<<endl;
    for(int i = 0;i < platosConsumidos.size() ;i++){
        cout<<platosConsumidos[i]<<endl;
    }
}

