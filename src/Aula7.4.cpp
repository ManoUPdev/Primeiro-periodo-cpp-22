#include <iostream>

int main() {
    int quantidade;
    char moedaAtual, moedaDesejada;

    std::cout << "Digite a quantidade de moedas: ";
    std::cin >> quantidade;
    std::cout << "Digite o tipo de moeda atual (O para ouro, P para prata, C para cobre): ";
    std::cin >> moedaAtual;
    std::cout << "Digite o tipo de moeda desejada (O para ouro, P para prata, C para cobre): ";
    std::cin >> moedaDesejada;

    int valorEmCobre = 0;

    // Converte tudo para cobre
    if (moedaAtual == 'O') {
        valorEmCobre = quantidade * 2500;
    } else if (moedaAtual == 'P') {
        valorEmCobre = quantidade * 50;
    } else if (moedaAtual == 'C') {
        valorEmCobre = quantidade;
    }

    // Converte do cobre para a moeda desejada
    if (moedaDesejada == 'O') {
        std::cout << valorEmCobre / 2500 << " moedas de ouro." << std::endl;
    } else if (moedaDesejada == 'P') {
        std::cout << valorEmCobre / 50 << " moedas de prata." << std::endl;
    } else if (moedaDesejada == 'C') {
        std::cout << valorEmCobre  << " moedas de cobre." << std::endl;
    }

    return 0;
}


