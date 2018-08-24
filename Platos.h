#ifndef PLATOS_H
#define PLATOS_H
#include <string>
using std::string;

class Platos{
    private:
        int cantIngredientes; //cantidad de ingredientes que contiene el plato
        string descripcion;
        int resultadoSabor;
        int vecesCocinado;
        int precio;
        int valorPromedio;

    public:
        Platos();

        Platos(int, string, int, int, int, int);

        int getCantIngredientes();
        void setCantIngredientes(int);

        string getDescripcion();
        void setDescripcion(string);

        int getResultadoSabor();
        void setResultadoSabor(int);

        int getVecesCocinado();
        void setVecesCocinado(int);

        int getPrecio();
        void setPrecio(int);

        int getValorPromedio();
        void setValorPromedio(int);




};

#endif