#include <iostream>

int main() {
    int idade;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    if (idade >= 16) {
        std::cout << "Voce pode jogar!" << std::endl;
    } else {
        std::cout << "Voce nao pode jogar!" << std::endl;
    }


    return 0;
}

