parametrosCompilacao=-Wall -g #-Wshadow
nomePrograma=aula

all: $(nomePrograma)

$(nomePrograma): main.o Usuario.o Carro.o Credenciais.o ControladorCarro.o StatusCarro.o
	g++ -o $(nomePrograma) main.o Usuario.o Carro.o Credenciais.o ControladorCarro.o  StatusCarro.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Usuario.o: Usuario.hpp Usuario.cpp
	g++ -c Usuario.cpp $(parametrosCompilacao)

Carro.o: Carro.hpp Carro.cpp
	g++ -c Carro.cpp $(parametrosCompilacao)

Credenciais.o: Credenciais.hpp Credenciais.cpp
	g++ -c Credenciais.cpp $(parametrosCompilacao)

ControladorCarro.o: ControladorCarro.hpp ControladorCarro.cpp
	g++ -c ControladorCarro.cpp $(parametrosCompilacao)

StatusCarro.o: StatusCarro.hpp StatusCarro.cpp
	g++ -c StatusCarro.cpp $(parametrosCompilacao)
clean:
	rm -f *.o *.gch $(nomePrograma)