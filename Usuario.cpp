#include "Usuario.hpp"
#include "Carro.hpp"

namespace carro{

Usuario::Usuario() {
    this->nome = "";
    this->email = "";
    this->senha = "";
}

Usuario::Usuario(const std::string nome, const std::string email, const std::string senha): nome(nome), email(email), senha(senha) {

}
  
Usuario::~Usuario() {

}

std::string Usuario::getNome() const {
    return this->nome;
}

std::string Usuario::getEmail() const{
    return this->email;
}

std::string Usuario::getSenha() const{
    return this->senha;
}

void Usuario::setNome(const std::string nome) {
    this->nome = nome;
}

void Usuario::setEmail(const std::string email) {
    this->email = email;
}

void Usuario::setSenha(const std::string senha) {
    this->senha = senha;
}

}