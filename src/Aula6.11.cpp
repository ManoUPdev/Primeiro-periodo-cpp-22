#include <iostream>

int main() {
    float quantidadeLatao;

    std::cout << "Digite a quantidade de latao desejada (em kg): ";
    std::cin >> quantidadeLatao;

    float cobre = quantidadeLatao * 0.7; // 70% de cobre
    float zinco = quantidadeLatao * 0.3; // 30% de zinco

    std::cout << "Para obter " << quantidadeLatao << " kg de latao, voce precisa de:" << std::endl;
    std::cout << cobre << "kg de cobre." << std::endl;
    std::cout << zinco << "kg de zinco." << std::endl;

    return 0;
}