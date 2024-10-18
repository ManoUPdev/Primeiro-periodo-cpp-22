#include <iostream>
#include <cmath>

int main() {
    double valor1, valor2, valor3;
    std::cout << "Digite o primeiro valor: ";
    std::cin >> valor1;
    std::cout << "Digite o segundo valor: ";
    std::cin >> valor2;
    std::cout << "Digite o terceiro valor: ";
    std::cin >> valor3;

    double media_geometrica = pow(valor1 * valor2 * valor3, 1.0 / 3.0);

    std::cout << "A media geometrica e: " <<media_geometrica << std::endl;
    
    return 0;
}

