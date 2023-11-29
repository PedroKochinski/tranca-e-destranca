#ifndef Status_CARRO_HPP
#define Status_CARRO_HPP

#include <string>
#include <iostream>

#include "Usuario.hpp"
#include "EnumStatusCarro.hpp"

// Classe responsável por estado atual do carro: localização e estado de trancamento

namespace carro {
    
class StatusCarro {
    public:
        StatusCarro();
        StatusCarro(std::string localizacao, EnumStatusCarro status);
        ~StatusCarro() = default;

        EnumStatusCarro getStatus();
        void setStatus(EnumStatusCarro status);

        std::string getLocalizacao();
        void getLocalizacao(std::string localizacao);

    private:
        std::string localizacao;
        EnumStatusCarro status;
         
};
}

#endif