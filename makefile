parametrosCompilacao=-Wall #-Wshadow
nomePrograma=aula

all: $(nomePrograma)

$(nomePrograma): main.o Usuario.o Carro.o Credenciais.o ControlaTrancamento.o ControladorCarro.o InformacaoCarro.o
	g++ -o $(nomePrograma) main.o Usuario.o Carro.o Credenciais.o ControlaTrancamento.o ControladorCarro.o  InformacaoCarro.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Usuario.o: Usuario.hpp Usuario.cpp
	g++ -c Usuario.cpp $(parametrosCompilacao)

Carro.o: Carro.hpp Carro.cpp
	g++ -c Carro.cpp $(parametrosCompilacao)

Credenciais.o: Credenciais.hpp Credenciais.cpp
	g++ -c Credenciais.cpp $(parametrosCompilacao)

ControlaTrancamento.o: ControlaTrancamento.hpp ControlaTrancamento.cpp
	g++ -c ControlaTrancamento.cpp $(parametrosCompilacao)

ControladorCarro.o: ControladorCarro.hpp ControladorCarro.cpp
	g++ -c ControladorCarro.cpp $(parametrosCompilacao)

InformacaoCarro.o: InformacaoCarro.hpp InformacaoCarro.cpp
	g++ -c InformacaoCarro.cpp $(parametrosCompilacao)
clean:
	rm -f *.o *.gch $(nomePrograma)