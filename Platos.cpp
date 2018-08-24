#include "Platos.h"

#include <iostream>
#include <string>
using namespace std;

Platos::Platos(int pCantIngredientes, string pDescripcion, int pResultadoSabor, int pVecesCocinado, int pPrecio, int pValorPromedio){
    cantIngredientes = pCantIngredientes;
    descripcion = pDescripcion;
    resultadoSabor = pResultadoSabor;
    vecesCocinado = pVecesCocinado;
    precio = pPrecio;
    valorPromedio = pValorPromedio;
}

int Platos::getCantIngredientes(){
    return cantIngredientes;
}

void Platos::setCantIngredientes(int n){
    cantIngredientes = n;
}

string Platos::getDescripcion(){
    return descripcion;
}

void Platos::setDescripcion(string descripcioon){
    descripcion = descripcioon;
}

int Platos::getResultadoSabor(){
    return resultadoSabor;
}

void Platos::setResultadoSabor(int rs){
    resultadoSabor = rs;
}

int Platos::getVecesCocinado(){
    return vecesCocinado;
}

void Platos::setVecesCocinado(int vc ){
    vecesCocinado = vc;
}

int Platos::getPrecio(){
    return precio;
}

void Platos::setPrecio(int p){
    precio = p;
}

int Platos::getValorPromedio(){
    return valorPromedio;
}

void Platos::setValorPromedio(int vp){
    valorPromedio = vp;
}

string Platos::getNombrePlato(){
    return nombrePlato;
}

void Platos::setNombrePlato(string p){
    nombrePlato = p;
}