#include "UserInterface.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include "ControladorCarro.hpp"

namespace carro{

UserInterface::UserInterface() {
    std::cout << std::endl << "Bem Vindo ao App de controle de seus veículos!" << std::endl;
    std::cout << "Versão 1.0.0." << std::endl << std::endl;
    std::cout << "Pressione Enter para continuar..." << std::endl;
}

int UserInterface::displayOperations() {
    int i = 1;
    std::cout << std::endl << "Qual operação gostaria de realizar?" << std::endl << std::endl;
    std::cout << "  [ "<< i << " ] Cadastrar um Veículo" << std::endl; i++;
    std::cout << "  [ "<< i << " ] Remover um Veículo" << std::endl; i++;
    std::cout << "  [ "<< i << " ] Obter Status de um Veículo" << std::endl; i++;
    std::cout << "  [ "<< i << " ] Trancar um Veículo" << std::endl; i++;
    std::cout << "  [ "<< i << " ] Destrancar um Veículo" << std::endl; i++;
    std::cout << "  [ "<< i << " ] Obter Veículos Cadastrados" << std::endl; i++; 
    std::cout << "  [ "<< i << " ] Sair" << std::endl << std::endl; 
    std::cout << "Entre com o número da operação." << std::endl << std::endl;
    std::cin >> bufferint;
    return bufferint;
}

void UserInterface::displayMessage(std::string msg){
    std::cout << std::endl << msg << std::endl;
}

std::string UserInterface::lerBufferString(std::string msg){
    std::cout << "Entre com " << msg << ": ";
    std::cin >> bufferstr;

    return bufferstr;
}

int UserInterface::lerBufferInt(std::string msg){
    std::cout << "Entre com " << msg << ": ";
    std::cin >> bufferint;

    return bufferint;
}

void UserInterface::exitMessage(){
    std::cout << std::endl << "Obrigado por usar nosso sistema." << std::endl << std::endl;
}

void UserInterface::okMessage(){
    std::cout << std::endl << "Operação bem sucedida!" << std::endl << std::endl;
    std::cout << "Pressione Enter para continuar...";
    std::cin.ignore();
    std::cin.ignore();
    clearScreen();
}

void UserInterface::invalidMessage(){
    std::cout << std::endl << "Operação inválida!" << std::endl << std::endl;
    std::cout << "Pressione Enter para continuar...";
    std::cin.ignore();
    std::cin.ignore();
    clearScreen();
}

void UserInterface::clearScreen(){
    std::cout << "\033[2J\033[1;1H";
    std::cout.flush();
}



}