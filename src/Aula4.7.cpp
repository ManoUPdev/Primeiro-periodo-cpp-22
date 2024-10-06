#include <iostream>

int main() {
    int nota1, nota2, nota3;
    std::cout << "Digite a primeira nota: ";
    std::cin >> nota1;
    std::cout << "Digite a segunda nota: ";
    std::cin >> nota2;
    std::cout << "Digite a terceira nota: ";
    std::cin >> nota3;

    double media = (nota1 + nota2 + nota3) / 3.0;

    std::cout << "A media aritmetica e: " << media << std::endl;
    
    return 0;
}