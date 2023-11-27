#include "Carro.hpp"

Carro::Carro() {
    this->marca = "";
    this->modelo = "";
    this->ano = 0;
    this->proprietario = nullptr;
}

Carro::Carro(std::string marca, std::string modelo, int ano, Usuario* proprietario): marca(marca), modelo(modelo), ano(ano), proprietario(proprietario) {

}

Carro::~Carro() {

}

std::string Carro::getMarca() const {
    return this->marca;
}

std::string Carro::getModelo() const {
    return this->modelo;
}

int Carro::getAno() const {
    return this->ano;
}

Usuario* Carro::getProprietario() const {
    return this->proprietario;
}

void Carro::setMarca(const std::string marca) {
    this->marca = marca;
}

void Carro::setModelo(const std::string modelo) {
    this->modelo = modelo;
}

void Carro::setAno(const int ano) {
    this->ano = ano;
}

void Carro::setProprietario(Usuario* proprietario) {
    this->proprietario = proprietario;
}

InformacaoCarro* Carro::getInformacaoCarro() {
    return this->informacaoCarro;
}