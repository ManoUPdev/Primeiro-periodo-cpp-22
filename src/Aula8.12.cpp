#include <iostream>
#include <string>

int main() {
    std::string nome;
    float notaA, notaB, media;

    for (int i = 0; i < 5; i++) {
        std::cout << "Digite o nome do aluno: ";
        std::cin >> nome;
        std::cout << "Digite a nota A (peso 1): ";
        std::cin >> notaA;
        std::cout << "Digite a nota B (peso 2): ";
        std::cin >> notaB;

        media = (notaA + 2 * notaB) / 3; // m�dia ponderada
        std::cout << "A media ponderada de " << nome << " �: " << media << std::endl;
    }

    return 0;
}


