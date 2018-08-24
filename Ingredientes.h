#ifndef INGREDIENTES_H
#define INGREDIENTES_H

#include <string>
using std::string;


class Ingredientes{
	private:
		string nombre;
		string tipo;
		int duracion; 
		int cantSabor;

	public:
        Ingredientes(string,string,int,int);

        //getters and setter 
        string getNombre();
		void setNombre(string);

		int getCantSabor();
		void setCantSabor(int);

		string getTipo();
		void setTipo(string);

		int getDuracion();
		void setDuracion(int);

		 ~Ingredientes();
};

#endif
