#include "Ingredientes.h"

#include <iostream>
#include <string>
using namespace std;

Ingredientes::Ingredientes(string pNombre,string pTipo,int pDuracion,int pCantSabor){
    nombre = pNombre;
    tipo = pTipo;
    duracion = pDuracion;
    cantSabor = pCantSabor;
}

string Ingredientes::getNombre(){
    return nombre;
}
void Ingredientes::setNombre(string pNombre){
    nombre = pNombre;
}

string Ingredientes::getTipo(){
    return tipo;
}

void Ingredientes::setTipo(string pTipo){
    tipo = pTipo;
}

int Ingredientes::getCantSabor(){
    return cantSabor;
}

void Ingredientes::setCantSabor(int pCantSabor){
    cantSabor = pCantSabor;
}
Ingredientes::~Ingredientes(){  
}

int Ingredientes::getDuracion(){
    return duracion;
}

void Ingredientes::setDuracion(int pDuracion){
    duracion = pDuracion;
}