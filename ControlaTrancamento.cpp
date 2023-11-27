#include "ControlaTrancamento.hpp"

void ControlaTrancamento::trancar(Carro* carro) {
    if(carro != nullptr) {
        std::cout << "Trancando carro..." << std::endl;
        carro->getInformacaoCarro()->setSituacao("Trancado");
    }
}

void ControlaTrancamento::destrancar(Carro* carro) {
    if(carro != nullptr) {
        std::cout << "Trancando carro..." << std::endl;
        carro->getInformacaoCarro()->setSituacao("Destrancado");
    }
}