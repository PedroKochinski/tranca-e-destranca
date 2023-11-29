#include <iostream>
#include "Usuario.hpp"
#include "Carro.hpp"
#include "ControladorCarro.hpp"

using namespace carro;

int main () {

    // Cria instância de usuário e controlador
    Usuario *localUser{new Usuario{"dudu", "dudumathias@inf.ufpr", "senha"}};
    ControladorCarro *controller{new ControladorCarro{}};

    // Adiciona dois carros ao usuário, que são gerenciados pelo controlador
    controller->cadastrarCarro("FKA2E03", "Ford", "Ford KA", 2003, localUser);
    controller->cadastrarCarro("PAL2W14", "Fiat", "Palio Weekend", 2014, localUser);

    // Imprime todos os carros do usuário
    controller->ObterCarrosCadastrados();

    // obtém estado do carro caso digite a senha
    if(controller->verificarCredenciaisUsuario(localUser)){

        if(controller->obterStatusCarro("FKA2E03") == EnumStatusCarro::TRANCADO){
            std::cout << "Carro trancado." << std::endl;
        }
    }

    // Remove o usuário e o controlador da memória
    delete localUser;
    delete controller;

    return 0;
}