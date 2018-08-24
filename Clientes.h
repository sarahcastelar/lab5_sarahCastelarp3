#ifndef CLIENTES_H
#define CLIENTES_H

#include "Platos.h"

#include <string>
using namespace std;

#include <vector>

class Clientes{
    private:
        string nombre;
        int promedio;
        int dineroGastado;
        vector<Platos*> platosConsumidos;


    public:
        Clientes(string nombre, int promedio, int dineroGastado, Platos* platosConsumidos);

        string getNombre();
        void setNombre(string);

        int getPromedio();
        void setPromedio(int);

        int getDineroGastado();
        void setDineroGastado();

        void getPlatosConsumidos();
        void setPlatosConsumidos(Platos*);





};

#endif