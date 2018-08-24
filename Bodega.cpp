#include "Bodega.h"
#include "Clientes.h"
#include <iostream>
#include <string>

Bodega::Bodega(){
}

Bodega::Bodega(Ingredientes* ingredientes) {
    vectorIngredientes.push_back(ingredientes);
}

Ingredientes* Bodega::getIngredientes(int n){
    return vectorIngredientes[n];
}

/*void Bodega::getListaIngredientes(){
    cout<<"Ingredientes: "<<endl;
    for(int i = 0;i < vectorIngredientes.size();i++){
        cout<<vectorIngredientes[i].g
        }
}*/

void Bodega::setIngredientes(Ingredientes* ingredientes){
    vectorIngredientes.push_back(ingredientes);
}

int* Bodega::getCantIngredientes(int n){
    return cantidadIngredientes[n];
}

Platos* Bodega::getPlatos(int n){
    return vectorPlatos[n];
}

void Bodega::setPlatos(Platos* platos){
    vectorPlatos.push_back(platos);
}

Clientes* Bodega::getClientes(int n){
    return vectorClientes[n];
}

void Bodega::setClientes(Clientes* cliente){
    vectorClientes.push_back(cliente);
}