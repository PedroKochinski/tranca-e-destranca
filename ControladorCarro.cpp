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

void ControladorCarro::trancarCarro(Carro* carro) {
    ControlaTrancamento* controlaTrancamento = new ControlaTrancamento();
    controlaTrancamento->trancar(carro);
}

void ControladorCarro::destrancarCarro(Carro* carro) {
    ControlaTrancamento* controlaTrancamento = new ControlaTrancamento();
    controlaTrancamento->destrancar(carro);
}