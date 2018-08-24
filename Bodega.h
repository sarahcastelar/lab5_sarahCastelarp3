#ifndef BODEGA_H
#define BODEGA_H 

#include "Ingredientes.h"
#include "Platos.h"
#include "Clientes.h"

#include <vector>
using std::vector;

class Bodega{//bodega maneja ingredientes platos menu e historial 
	public:
		vector<Ingredientes*> vectorIngredientes;
		vector<int*> cantidadIngredientes;

		Bodega();
        Bodega(Ingredientes*);

        Ingredientes* getIngredientes(int);
        void setIngredientes(Ingredientes*);
		void getListaIngredientes();

		int* getCantIngredientes(int);
		void setCantIngredientes(int);

		vector<Platos*> vectorPlatos;
		Platos* getPlatos(int);
		void setPlatos(Platos*);

		vector<Clientes*> vectorClientes;
		Clientes* getClientes(int);
		void setClientes(Clientes*);

};

#endif


		
