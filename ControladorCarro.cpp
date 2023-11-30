#include "ControladorCarro.hpp"

namespace carro{

// Destrutor
ControladorCarro::~ControladorCarro(){
    std::list<Carro*>::iterator it{listaCarros.begin()};

    // Remove todos os carros da memória antes de abortar o programa
    while(it != listaCarros.end()){
        delete *it;
        it = listaCarros.erase(it);
    }
}

bool ControladorCarro::verificarCredenciaisUsuario(Usuario* usuario) {
    Credenciais* credenciais{new Credenciais()};
    return credenciais->verificarCredenciaisUsuario(usuario);
}

void ControladorCarro::cadastrarCarro(std::string placa, std::string marca, std::string modelo, int ano, Usuario* proprietario){
    // Adiciona um carro a lista de carros gerenciados pelo controlador
    listaCarros.push_back(new Carro{placa, marca, modelo, ano, proprietario});
}

void ControladorCarro::removerCarro(std::string placa){
    std::list<Carro*>::iterator it{listaCarros.begin()};

    // Procura carro pela placa e o remove dos carros do usuário do app
    while(it != listaCarros.end()){
        if((*it)->getPlaca() == placa){
            delete *it;
            it = listaCarros.erase(it);
        }else{
            it++;
        }
    }
}

std::string ControladorCarro::obterStatusCarro(std::string placa) {
    std::list<Carro*>::iterator it{listaCarros.begin()};

    // Procura carro pela placa e devolve seu status
    while(it != listaCarros.end()){
        if((*it)->getPlaca() == placa){
            EnumStatusCarro st{(*it)->getStatusCarro()->getStatus()};
            if(st == EnumStatusCarro::TRANCADO){
                return "Veículo Trancado.";
            }
            else{
                return "Veículo Destrancado.";
            }
        }else{
            it++;
        }
    }

    return "Veículo não encontrado.";
}

void ControladorCarro::trancarCarro(std::string placa) {

    std::list<Carro*>::iterator it{listaCarros.begin()};

    // Procura carro pela placa e o tranca
    while(it != listaCarros.end()){
        if((*it)->getPlaca() == placa){
            StatusCarro* st{(*it)->getStatusCarro()};
            st->setStatus(EnumStatusCarro::TRANCADO);
            break;
        }else{
            it++;
        }
    }

}

void ControladorCarro::destrancarCarro(std::string placa) {
    
    std::list<Carro*>::iterator it{listaCarros.begin()};

    // Procura carro pela placa e o destranca
    while(it != listaCarros.end()){
        if((*it)->getPlaca() == placa){
            StatusCarro* st{(*it)->getStatusCarro()};
            st->setStatus(EnumStatusCarro::DESTRANCADO);
            break;
        }else{
            it++;
        }
    }

}

void ControladorCarro::ObterCarrosCadastrados(){
    std::list<Carro*>::iterator it{listaCarros.begin()};
    
    // Imprime todos os carros do usuário
    for(;it != listaCarros.end(); it++){
        (*it)->imprimeDados();
    }
}

}