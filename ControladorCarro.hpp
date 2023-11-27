#ifndef CONTROLADOR_CARRO_HPP
#define CONTROLADOR_CARRO_HPP

#include <string>
#include <iostream>
#include "Usuario.hpp"
#include "Carro.hpp"

class ControladorCarro {
    public:
        bool verificarCredenciaisUsuario(Usuario* usuario);
        std::string obterInformacaoCarro(Carro* carro);
        
};

#endif