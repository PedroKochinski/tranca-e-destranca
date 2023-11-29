#ifndef USUARIO_HPP
#define USUARIO_HPP

#include <string>
#include <list>
#include "Credenciais.hpp"

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


    private:
        std::string nome;
        std::string email;
        std::string senha;
};
#endif