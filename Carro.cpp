#include "Carro.hpp"

#include <chrono> // validar ano
#include <iostream> // imprimir dados

namespace carro {

Carro::Carro()
    : placa{""}, marca{""}, modelo{""}, ano{0}, proprietario{nullptr} {}

Carro::Carro(std::string placa, std::string marca, std::string modelo, int ano, Usuario* proprietario)
: placa{placa}, marca{marca}, modelo{modelo}, ano{ano}, proprietario{proprietario}, status{new StatusCarro()} {
}

Carro::~Carro(){
    delete status;
}

std::string Carro::getPlaca() const{
    return this->placa;
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

void Carro::setPlaca(const std::string placa) {
    this->placa = placa;
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

// Especialista
// Se a Classe sabe suas informações, ela pode assumir a responsabilidade
// de imprimir seus dados
void Carro::imprimeDados(){

    std::cout << "Placa: " << getPlaca() << std::endl;
    std::cout << "Marca: " << getMarca() << std::endl;
    std::cout << "Modelo: " << getModelo() << std::endl;
    std::cout << "Ano: " << getAno() << std::endl;
    std::cout << "Proprietário: " << getProprietario()->getNome() << std::endl << std::endl;
}

StatusCarro* Carro::getStatusCarro() {
    return this->status;
}

}