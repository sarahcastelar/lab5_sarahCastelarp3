#ifndef BODEGA_H
#define BODEGA_H 

#include "Ingredientes.h"

#include <vector>
using std::vector;

class Bodega{
	public:
		vector<Ingredientes*> vectorIngredientes;
		vector<int*> cantidadIngredientes;

		Bodega();
        Bodega(Ingredientes*);

        Ingredientes* getIngredientes(int);
        void setIngredientes(Ingredientes*);

		int* getCantIngredientes(int);
		void setCantIngredientes(int);


};

#endif


		
