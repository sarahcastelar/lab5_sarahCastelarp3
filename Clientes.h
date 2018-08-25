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
        


    public:
        vector<Platos*> platosConsumidos;
        Clientes(string nombre, int promedio, int dineroGastado, vector<Platos*> platosConsumidos1);

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