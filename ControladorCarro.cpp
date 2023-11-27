#include "ControladorCarro.hpp"

bool ControladorCarro::verificarCredenciaisUsuario(Usuario* usuario) {
    Credenciais* credenciais = new Credenciais();
    return credenciais->verificarCredenciaisUsuario(usuario);
}

std::string ControladorCarro::obterInformacaoCarro(Carro* carro) {
    if(carro != nullptr) {
        return carro->getInformacaoCarro()->getInformacao();
    }
    return "";
}