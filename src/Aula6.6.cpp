#include <iostream>

int main() {
    float peso, excesso,multa;

    std::cout << "Digite o peso de peixes: ";
    std::cin >> peso;

    if (peso > 50) {
        excesso = peso - 50;
        multa = excesso * 7;
        std::cout << "Excesso: " << excesso << " kg " << std::endl;
        std::cout << "Multa: R$ " << multa << std::endl;
    } else {
        std::cout << "Excesso: 0 kg" << std::endl;
        std::cout << "Multa: R$ 0" << std::endl;
}

    return 0;
}

