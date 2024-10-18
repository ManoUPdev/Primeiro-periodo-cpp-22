#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um numero: ";
    std::cin >> numero;

    if (numero % 5 == 0) {
        std::cout << "O numero e multiplo de 5." << std::endl;
    } else {
        std::cout << "O numero nao e multiplo de 5." << std::endl;
}

    return 0;
}

