#include <iostream>

int main() {
    int idade;
    char universitario, ingles;

    std::cout << "Digite a sua idade: ";
    std::cin >> idade;

    std::cout << "Voce e universitario? (S para Sim, N para Não): ";
    std::cin >> universitario;

    std::cout << "Voce tem conhecimentos de ingles? (S para Sim, N para Não): ";
    std::cin >> ingles;

    if (idade > 18 && (universitario == 'S' || universitario == 's') && (ingles == 'S' || ingles == 's')) {
        std::cout << "Voce esta apto para o cargo." << std::endl;
    } else {
        std::cout << "Voce nao esta apto para o cargo." << std::endl;
    }

    return 0;
}
