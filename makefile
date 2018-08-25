main:	Bodega.o Clientes.o Ingredientes.o Main.o Platos.o 
	g++ Bodega.o Clientes.o Ingredientes.o Main.o Platos.o -o main
	rm *.o

main.o:	Main.cpp Bodega.h Clientes.h Ingredientes.h Platos.h 
	g++ -c main.cpp

Bodega.o:	Bodega.cpp Bodega.h Clientes.h Clientes.cpp
	g++ -c Bodega.cpp 

Clientes.o:	Clientes.cpp Clientes.h
	g++ -c Clientes.cpp

Ingredientes.o:	Ingredientes.h Ingredientes.cpp
	g++ -c Ingredientes.cpp

Platos.o:	Platos.h Platos.cpp
	g++ -c Platos.cpp