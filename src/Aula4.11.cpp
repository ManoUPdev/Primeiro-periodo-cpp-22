#include <iostream>

int main() {
    double nota1, nota2;
    std::cout << "Digite a primeira nota (peso 2): ";
    std::cin >> nota1;
    std::cout << "Digite a segunda nota (peso 3): ";
    std::cin >> nota2;

    double nota_semestre = (nota1 * 2 + nota2 * 3) / 5;

    std::cout << "A nota do semestre e: " << nota_semestre << std::endl;
    
    return 0;
}

