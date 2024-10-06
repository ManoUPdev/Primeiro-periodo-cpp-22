#include <iostream>

int main() {
    int A, B, C;

    std::cout << "Digite o valor de A:"
    std::cin  >> A;
    std::cout << "Digite o valor de B"
    std::cin  >> B;
    std::cout << "Digite o valor de C"
    std::cin  >> C;

    int R = (A + B) * (A + B); // R = (A + B)^2
    int S = (B + C) * (B + C); // S = (B + C)^2
    int D = (R + S) / 2; // D = (R + S) / 2

    std::cout << "O valor de D e: " << D << std::endl;

    return 0;
}