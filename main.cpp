#include <iostream>

#include "Usuario.hpp"
#include "Carro.hpp"
#include "ControladorCarro.hpp"
#include "UserInterface.hpp"

using namespace carro;

int main () {

    // Cria instância de usuário, controlador e interface
    Usuario *localUser{new Usuario{"dudu", "dudumathias@inf.ufpr", "senha"}};
    ControladorCarro *controller{new ControladorCarro{}};
    UserInterface *userInterface{new UserInterface{}};

    int opt = userInterface->displayOperations();

    for(;opt!= 7;){
        if (opt == 1) {
            std::string placa{userInterface->lerBufferString("a Placa")};
            std::string marca{userInterface->lerBufferString("a Marca")};
            std::string modelo{userInterface->lerBufferString("o Modelo")};
            int ano{userInterface->lerBufferInt("o Ano")};
            controller->cadastrarCarro(placa, marca, modelo, ano, localUser);
            userInterface->okMessage();
        }
        else if (opt == 2){
            std::string placa{userInterface->lerBufferString("a Placa")};
            controller->removerCarro(placa);
            userInterface->okMessage();
        }
        else if (opt == 3){
            std::string placa{userInterface->lerBufferString("a Placa")};
            std::string msg{controller->obterStatusCarro(placa)};
            userInterface->displayMessage(msg);
            userInterface->okMessage();
        }
        else if (opt == 4){
            std::string placa{userInterface->lerBufferString("a Placa")};
            controller->trancarCarro(placa);
            userInterface->okMessage();
        }
        else if (opt == 5){
            std::string placa{userInterface->lerBufferString("a Placa")};
            controller->destrancarCarro(placa);
            userInterface->okMessage();
        }
        else if (opt == 6){
            controller->ObterCarrosCadastrados();
            userInterface->okMessage();
        }
        else {
            userInterface->invalidMessage();
        }

        opt = userInterface->displayOperations();
    }
    userInterface->exitMessage();


    // Adiciona dois carros ao usuário, que são gerenciados pelo controlador
    // controller->cadastrarCarro("FKA2E03", "Ford", "Ford KA", 2003, localUser);
    // controller->cadastrarCarro("PAL2W14", "Fiat", "Palio Weekend", 2014, localUser);

    // Imprime todos os carros do usuário
    // controller->ObterCarrosCadastrados();

    // obtém estado do carro caso digite a senha
    // if(controller->verificarCredenciaisUsuario(localUser)){

            // if(controller->obterStatusCarro("FKA2E03") == EnumStatusCarro::TRANCADO){
                // std::cout << "Carro trancado." << std::endl;
            // }
    // }

    // Remove o usuário e o controlador da memória
    delete localUser;
    delete controller;
    delete userInterface;

    return 0;
}