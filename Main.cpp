#include <iostream>
#include <string>
#include "Bodega.h"
#include "Clientes.h"
#include "Ingredientes.h"
#include "Platos.h"
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::string;

/*
vector<ingredientes*> v_ingredientes;
vector<platos*> v_platos;

bodega* bodega1=new bodega();
int platatitos=0;
*/

vector<Ingredientes*> listaIngredientes;
vector<Platos*> listaPlatos;

Bodega* bodega;

int menu (){
   int opcion = 0;
   while (true){
  	cout<<" BIENVENIDO! Que desea hacer?" << endl
	<< "1. Ver Inventario Completo" << endl
	<< "2. Agregar Ingredientes" << endl
    << "3. Agregar Plato"<<endl
    << "4. Ver menu y comprar"<<endl
    <<"5. "<<endl;;
	cin >> opcion;

	if (opcion < 1 || opcion > 2)
	   cout<<"Opcion incorrecta, intente de nuevo."<<endl;
	else 
	   return opcion;
}
}


int main (){
    bodega = new Bodega();
    string nombreP = "";
	int opcion = 0;
	while (opcion != 2){
		switch (opcion = menu()){
			case 1:
				cout<< "Inventario de los Ingredientes: "<<endl;
                for(int i = 0;i < bodega->vectorIngredientes.size();i++){
                    cout<<"["<<bodega->getIngredientes(i)->getNombre()<<"]";
                }

                cout<<"Inventario de los platos: "<<endl;
                //imprimirlos aqui



			break;

            case 2: {
            //agregar ingredientes
                string nombre = "";
                string tipo = "";
                int duracion=-1, cantSabor=-1;
                Ingredientes* temporal;
                cout<<"Ingrese nombre: "<<endl;
                cin>>nombre;
                cout<<"Ingrese tipo (lacteo, vegetales, frutas, otros)"<<endl;
                cin >> tipo;
                cout<<"Ingrese cantidad de producto: (duracion)"<<endl;
                cin>>duracion;
                cout<<"Ingrese cantidad de sabor: "<<endl;
                cin>>cantSabor;
                
                temporal = new Ingredientes(nombre,tipo,duracion,cantSabor);
                bodega->setIngredientes(temporal);
                cout<<"Ingrediente agregado exitosamente. "<<endl;
            } break;

            case 3:{
                //agregar plato
                string descripcion = "", temporalIngrediente = "", nombre = "";
                char r = 's'; 
                int cantIngredientes=-1, resultadoSabor=-1, vecesCocinado=0, precio =-1, valorPromedio=-1;
                vector<Ingredientes*> ingre;
                vector<string> temporal;
                Platos* plato1;

               /* //le muestro los ingredientes disponibles
                cout<<"Los unicos ingredientes disponibles en la bodega son: "<<endl;
                for(int i = 0;i < bodega->vectorIngredientes.size();i++){
                    cout<<"["<<bodega->getIngredientes(i)->getNombre()<<"]";
                    temporal.push_back(bodega->getIngredientes(i)->getNombre());
                }

                while (r == 's'){
                    cout<<"Ingrese ingrediente para su plato: "<<endl;
                    cin >> temporalIngrediente;
                    
                    for(int i = 0; i < temporal.size; i++){
                        string temporal2 = temporal[i];
                        if (temporalIngrediente.compare(temporal2) == 0){
                            
                        }
                    }
                }*/
                cout<<"Ingrese nombre del plato: "<<endl;
                cin >> nombre;
                cout<<"Ingrese cantidad de ingredientes que ocupa el plato: "<<endl;
                cin>>cantIngredientes;
                cout<<"Ingrese descripcion del plato: "<<endl;
                cin >> descripcion;
                cout<<"Ingrese precio de producto: (duracion)"<<endl;
                cin>>precio;

                plato1 = new Platos(cantIngredientes,descripcion,resultadoSabor,vecesCocinado,precio,valorPromedio, nombre);
                bodega->setPlatos(plato1);
                cout<<"plato agregado exitosamente. "<<endl;

            }break;

            case 4: {
                int promedio=-1, dinero=-1, numPlato=-1;
                vector<Platos*> platosConsumidos;
                //ensenar menuuuuu de platos
                cout<<"Los platos disponibles son: "<<endl;
                for(int i = 0;i < bodega->vectorPlatos.size();i++){
                    cout<<"Plato #"<<i+1<<" : \n"<<bodega->getPlatos(i)->getNombrePlato()<<" \n Descripcion: \n"
                    <<bodega->getPlatos(i)->getDescripcion()<<" \n Precio: "<<bodega->getPlatos(i)->getPrecio()<<
                    ".Lps"<<endl;
                }

//                  Clientes::Clientes(string pNombre, int pPromedio, int pDinero, Platos* pPlatosConsumidos){
                cout<<"Ingrese su nombre por favor. "<<endl;
                cin >> nombreP;
                cout<<"Ingrese numero del plato a comprar: "<<endl;
                cin >> numPlato;
                numPlato--;
                dinero = bodega->vectorPlatos[numPlato]->getPrecio();
                cout<<"Ingrese promedio que le da a su plato: "<<endl;
                cin >> promedio;
                platosConsumidos.push_back(bodega->vectorPlatos[numPlato]);

                
                


            }break;


		}
	 }
	return 0;
};
