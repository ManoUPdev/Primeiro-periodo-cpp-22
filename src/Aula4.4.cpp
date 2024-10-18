#include <iostream>

int main() {
    int feios, muito_feios, pavorosos;
    std::cout << "Digite a quantidade de monstros feios mortos: ";
    std::cin >> feios;
    std::cout << "Digite a quantidade de monstros muito feios mortos: ";
    std::cin >> muito_feios;
    std::cout << "Digite a quantidade de monstros pavorosos: ";
    std::cin >> pavorosos;

    int pontos = (feios * 1) + (muito_feios * 5) + (pavorosos * 10);
    double ponto_com_bonus = pontos + (pontos * 0.10);

    std::cout << "Pontos totais (com bonus): " << ponto_com_bonus << std::endl;
    
    return 0;
}

