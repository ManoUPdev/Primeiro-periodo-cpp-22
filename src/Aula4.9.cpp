#include <iostream>

int main() {
    double N1, N2, N3;
    std::cout << "Digite a primeira nota: ";
    std::cin >> N1;
    std::cout << "Digite a segunda nota: ";
    std::cin >> N2;
    std::cout << "Digite a terceira nota: ";
    std::cin >> N3;

    double media_ponderada = (N1 * 1 + N2 * 2 + N3 * 3) / 6;

    std::cout << "A media ponderada e: " <<media_ponderada << std::endl;

    return 0;
}

