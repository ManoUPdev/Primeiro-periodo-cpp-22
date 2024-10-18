#include <iostream>

int main() {
    char sexo;
    float pontos, bonus;

    std::cout << "Digite o sexo (M para masculino, F para feminino): ";
    std::cin >> sexo;

    std::cout << "Digite os pontos: ";
    std::cin >> pontos;

    if (sexo == 'M' || sexo == 'm') {
        bonus = pontos * 0.05;
    } else if (sexo == 'F' || sexo == 'f') {
        bonus = pontos * 0.07;
    } else {
        std::cout << "Sexo invalido." << std::endl;
        return 1;
    }

    
    std::cout << "O bonus e: " << bonus << std::endl;

    return 0;
}

