#include <iostream>

int main() {
    double F, C;
    std::cout << "Digite a temperatura em Fahrenheit: ";
    std::cin >> F;

    C = 5.0 / 9.0 * (F - 32);
    std::cout << "Temperatura em Celsius: " << C << std::endl;

    return 0;
}

