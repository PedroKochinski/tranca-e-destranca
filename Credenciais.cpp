#include "Credenciais.hpp"

bool Credenciais::verificarCredenciaisUsuario(Usuario* usuario) {
    if(usuario != nullptr) {
        std::string nome, email, senha;
        std::cout << "Digite o nome do usuario: ";
        std::cin >> nome;
        std::cout << "Digite o email do usuario: ";
        std::cin >> email;
        std::cout << "Digite a senha do usuario: ";
        std::cin >> senha;
        if(usuario->getNome() == nome && usuario->getEmail() == email && usuario->getSenha() == senha) {
            return true;
        }
    }
    return false;
}