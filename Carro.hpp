#ifndef CARRO_HPP
#define CARRO_HPP

#include <string>
#include "StatusCarro.hpp"
#include "Usuario.hpp"

namespace carro {

class Carro{

    public:
        Carro();
        Carro(std::string placa, std::string marca, std::string modelo, int ano, Usuario* proprietario);
        virtual ~Carro();

        std::string getPlaca() const;
        std::string getMarca() const;
        std::string getModelo() const;
        int getAno() const;
        Usuario* getProprietario() const;
        StatusCarro *getStatusCarro();

        void setPlaca(const std::string marca);
        void setMarca(const std::string marca);
        void setAno(const int ano);
        void setModelo(const std::string modelo);
        void setProprietario(Usuario* proprietario);

        void imprimeDados(); // Especialista

    private:
        std::string placa;
        std::string marca;
        std::string modelo;
        int ano;
        Usuario* proprietario;

        StatusCarro* status;
};

}

#endif