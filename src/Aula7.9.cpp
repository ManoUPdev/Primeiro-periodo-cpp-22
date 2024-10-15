#include <iostream>

int main() {
    int numero;

    std::cout << "Digite um numero: ";
    std::cin >> numero;

    if (numero % 2 == 0) {
        std::cout << "O número e par." << std::endl;
    } else {
        std::cout << "O número e impar." << std::endl;
    }

    return 0;
}
