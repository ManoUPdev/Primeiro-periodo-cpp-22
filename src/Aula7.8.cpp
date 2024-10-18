#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    if (num1 == num2) {
        std::cout << "Os numeros sao iguais." << std::endl;
    } else {
        std::cout << "Os numeros sao diferentes." << std::endl;
    }

    return 0;
}

