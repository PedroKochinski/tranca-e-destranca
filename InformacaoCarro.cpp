#include "InformacaoCarro.hpp"

InformacaoCarro::InformacaoCarro() {
    this->dataManutencao = "";
    this->descricao = "";
    this->situacao = "";
}

InformacaoCarro::InformacaoCarro(std::string dataManutencao, std::string descricao, std::string situacao) {
    this->dataManutencao = dataManutencao;
    this->descricao = descricao;
    this->situacao = situacao;
}

InformacaoCarro::~InformacaoCarro() {
    
}

std::string InformacaoCarro::getInformacao() {
    return "Data de manutencao: " + this->dataManutencao + "\nDescricao: " + this->descricao + "\nSituacao: " + this->situacao;
}

void InformacaoCarro::setInformacao(std::string dataManutencao, std::string descricao, std::string situacao) {
    this->dataManutencao = dataManutencao;
    this->descricao = descricao;
    this->situacao = situacao;
}