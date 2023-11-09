#ifndef CARRO_HPP
#define CARRO_HPP

#include <string>
#include "Usuario.hpp"

class Usuario;

class Carro{

    public:
        Carro();
        Carro(std::string marca, std::string modelo, int ano, Usuario* proprietario);
        ~Carro();
        std::string getMarca() const;
        std::string getModelo() const;
        int getAno() const;
        Usuario* getProprietario() const;
        void setMarca(const std::string marca);
        void setModelo(const std::string modelo);
        void setAno(const int ano);
        void setProprietario(Usuario* proprietario);
        void imprimeDados();

    private:
        std::string marca;
        std::string modelo;
        int ano;
        Usuario* proprietario;
};

#endif