#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um numero: ";
    std::cin >> numero;

    if (numero % 2 == 0) {
        std::cout << "O numero e par." << std::endl;
    } else {
        std::cout << "O numero e impar." << std::endl;
    }

    return 0;
}

