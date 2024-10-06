#include <iostream>

int main() {
    float velocidadeMaxima, velocidadeMotorista;

    std::cout << "Digite a velocidade maxima permitida: ";
    std::cin >> velocidadeMaxima;
    std::cout << "Digite a velocidade do motorista: ";
    std::cin >> velocidadeMotorista;

    float excesso = velocidadeMotorista - velocidadeMaxima;
    float multa = 0;

    if(excesso <= 0) {
        std::cout << "Sem multa." << std::endl;

    } else if (excesso <= 10) {
        multa = 50;
        std::cout << "Multa: R$ " << multa << std::endl;
    } else if (excesso <= 30) {
        multa = 100;
        std::cout << "Multa: R$ " << multa << std::endl;
    } else {
        multa = 200;
        std::cout << "Multa: R$ " << multa << std::endl;
}


    return 0;
}