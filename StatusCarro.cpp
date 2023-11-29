#include "StatusCarro.hpp"

namespace carro {

StatusCarro::StatusCarro()
    : localizacao{""}, status{EnumStatusCarro::TRANCADO} {}

StatusCarro::StatusCarro(std::string localizacao, EnumStatusCarro status)
    : localizacao{localizacao}, status{status} {}

EnumStatusCarro StatusCarro::getStatus(){
    return this->status;
}

void StatusCarro::setStatus(EnumStatusCarro status){
    this->status = status;
}

std::string StatusCarro::getLocalizacao(){
    return this->localizacao;
}

void StatusCarro::getLocalizacao(std::string localizacao){
    this->localizacao = localizacao;
}

}