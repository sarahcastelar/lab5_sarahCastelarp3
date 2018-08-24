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
        string nombrePlato;

    public:
        Platos();

        Platos(int, string, int, int, int, int, string);

        string getNombrePlato();
        void setNombrePlato(string);

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