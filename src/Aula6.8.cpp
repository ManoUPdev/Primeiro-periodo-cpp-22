#include <iostream>

int main() {
    int anos;
    int cigarrosPorDia;
    float precoCarteira;

    std::cout << "Digite o numero de anos que fuma: ";
    std::cin >> anos;
    std::cout << "Digite o numero de cigarros fumados por dia: ";
    std::cin >> cigarrosPorDia;
    std::cout << "Digite o preco de uma carteira de cigarros: ";
    std::cin >> precoCarteira;

    float totalGasto = (anos * 365 * cigarrosPorDia / 20) * precoCarteira; // 20 cigarros por dia
    std::cout << "Voce gastou aproximademente: R$ " << totalGasto << std::endl;

    return 0;
}

