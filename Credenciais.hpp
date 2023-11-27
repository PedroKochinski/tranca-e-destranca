#ifndef CREDENCIAIS_HPP
#define CREDENCIAIS_HPP

#include <string>
#include <iostream>
#include "Usuario.hpp"

class Usuario;

class Credenciais {
    public:
        bool verificarCredenciaisUsuario(Usuario* usuario);
         
};

#endif