#ifndef CONTROLADOR_CARRO_HPP
#define CONTROLADOR_CARRO_HPP

#include <string>
#include <iostream>
#include <list>

#include "Usuario.hpp"
#include "Carro.hpp"

#include "EnumStatusCarro.hpp"

// Objeto de interface responsável por gerenciar eventos do sistema,
// definindo métodos para operações do sistema: trancar carro, cadastrar
// carro, ver estado de trancamento do carro, etc.

namespace carro {

class ControladorCarro {
    public:
        ControladorCarro() = default;
        virtual ~ControladorCarro();

        bool verificarCredenciaisUsuario(Usuario* usuario);

        void cadastrarCarro(std::string placa, std::string marca, std::string modelo, int ano, Usuario* proprietario);
        void removerCarro(std::string placa);       

        EnumStatusCarro obterStatusCarro(std::string placa);
        void trancarCarro(std::string placa);
        void destrancarCarro(std::string placa);

        void ObterCarrosCadastrados();

    private:
        std::list<Carro*> listaCarros; 
};
}

#endif