#include "Bodega.h"
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
void Bodega::setIngredientes(Ingredientes* ingredientes){
    vectorIngredientes.push_back(ingredientes);
}

int* Bodega::getCantIngredientes(int n){
    return cantidadIngredientes[n];
}

