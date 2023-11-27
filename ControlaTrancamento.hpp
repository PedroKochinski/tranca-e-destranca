#ifndef CONTROLA_TRANCAMENTO_HPP
#define CONTROLA_TRANCAMENTO_HPP

#include <string>
#include <iostream>
#include "Usuario.hpp"
#include "Carro.hpp"

class ControlaTrancamento {
    public:
        void trancar(Carro* carro);
        void destrancar(Carro* carro);

};

#endif