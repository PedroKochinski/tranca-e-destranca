#ifndef USUARIO_HPP
#define USUARIO_HPP

#include <string>
#include <list>
#include "Carro.hpp"
#include "Credenciais.hpp"
class Carro;

class Usuario{
    public:
        Usuario();
        Usuario(const std::string nome, const std::string email, const std::string senha);
        virtual ~Usuario();

        void setEmail(const std::string email);
        std::string getEmail() const;
        
        void setSenha(const std::string senha);
        std::string getSenha() const;

        void setNome(const std::string nome);
        std::string getNome() const;

        void adicionarCarro(Carro* carro);
        void removerCarro(Carro* carro);
        std::list<Carro*> obterCarrosPossuidos() const;

    private:
        std::string nome;
        std::string email;
        std::string senha;
        std::list<Carro*> carrosPossuidos;
};
#endif