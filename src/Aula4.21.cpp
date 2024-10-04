#include <iostream>

int main() {
    double valor, taxa, dias, prestacao;

    std::cout << "Digite o valor da prestacao: "  
    std::cin >> valor;

    std::cout << "Digite a taxa de atraso (%): ";  
    std::cin  >> taxa;

    std::cout << "Digite o numero de dias de atraso: ";
    std::cin  >> dias;

    prestacao = valor + (valor * (taxa / 100)* dias);

    std::cout << "O valor da prestacao com atraso e: " << prestacao << std::endl;

    return 0;
}