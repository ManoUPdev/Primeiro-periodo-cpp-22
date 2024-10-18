#include <iostream>
#include <string>

int main() {
    std::string nomeCorreto = "SeuNome"; //Substitua pelo seu nome
    std::string nomeUsuario;

    std::cout << "Digite seu nome: ";
    std::cin >> nomeUsuario;

    if (nomeUsuario == nomeCorreto) {
        std::cout << "NOME CORRETO" << std::endl;
    } else {
        std::cout << "NOME INCORRETO" << std::endl;
    }

    return 0;
}

