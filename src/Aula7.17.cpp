#include <iostream>

int main() {
    float renda, imposto;

    std::cout << "Digite o valor da sua renda: ";
    std::cin >> renda;

    if (renda <= 1200) {
        imposto = 0;
    } else if (renda <= 5000) {
        imposto = (renda - 1200) * 0.10;
    } else if (renda <= 10000) {
        imposto = (5000 - 1200) * 0.10 + (renda - 5000) * 0.15;
    } else {
        imposto = (5000 - 1200) * 0.10 + (10000 - 5000) * 0.15; + (renda - 10000) * 0.20;
}

    std::cout << "O imposto a pagar e: R$" << imposto << std::endl;

    return 0;
}