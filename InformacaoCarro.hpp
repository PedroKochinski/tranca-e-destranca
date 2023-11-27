#ifndef INFORMACAO_CARRO_HPP
#define INFORMACAO_CARRO_HPP

#include <string>
#include <iostream>
#include "Usuario.hpp"

class InformacaoCarro {
    public:
        InformacaoCarro();
        InformacaoCarro(std::string dataManutencao, std::string descricao, std::string situacao);
        ~InformacaoCarro();
        std::string getInformacao();
        void setInformacao(std::string dataManutencao, std::string descricao, std::string situacao);
        void setSituacao(std::string situacao);

    private:
        std::string dataManutencao;
        std::string descricao;
        std::string situacao;
         
};

#endif