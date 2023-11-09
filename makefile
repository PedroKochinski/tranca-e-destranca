parametrosCompilacao=-Wall #-Wshadow
nomePrograma=aula

all: $(nomePrograma)

$(nomePrograma): main.o Usuario.o Carro.o
	g++ -o $(nomePrograma) main.o Usuario.o Carro.o  $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Usuario.o: Usuario.hpp Usuario.cpp
	g++ -c Usuario.cpp $(parametrosCompilacao)

Carro.o: Carro.hpp Carro.cpp
	g++ -c Carro.cpp $(parametrosCompilacao)


clean:
	rm -f *.o *.gch $(nomePrograma)