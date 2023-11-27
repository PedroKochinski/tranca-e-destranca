#include "Carro.hpp"
#include <chrono> // validar ano
#include <iostream> // imprimir dados

Carro::Carro()
    : marca{""}, modelo{""}, ano{0}, proprietario{nullptr} {}

Carro::Carro(std::string marca, std::string modelo, int ano, Usuario* proprietario)
: marca{marca}, modelo{modelo}, ano{ano}, proprietario{proprietario} {}

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

bool Carro::ValidarAno(int ano) const {

    // Get the current time point and convert to std::time_t
    auto currentTime = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(currentTime);

    // convert to std::tm and access current year
    std::tm* timeInfo = std::gmtime(&time);
    int ano_atual = timeInfo->tm_year + 1900;

    if(ano < 1950 || ano > ano_atual){
        return false;
    }

    return true;
}

void Carro::setAno(const int ano) {
    if(!ValidarAno(ano))
        throw (int)1;

    this->ano = ano;
}

void Carro::setProprietario(Usuario* proprietario) {
    this->proprietario = proprietario;
}

InformacaoCarro* Carro::getInformacaoCarro() {
    return this->informacaoCarro;
}

// Especialista
// Se a Classe sabe suas informações, ela pode assumir a responsabilidade
// de imprimir seus dados
void Carro::imprimeDados(){

    std::cout << "Marca: " << getMarca() << std::endl;
    std::cout << "Modelo: " << getModelo() << std::endl;
    std::cout << "Ano: " << getAno() << std::endl;
    std::cout << "Proprietário: " << getProprietario() << std::endl;

}