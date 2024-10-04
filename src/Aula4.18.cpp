#include <iostream>

int main() {
    int valor, notas_100, notas_50, notas_20, notas_10, notas_5, notas_1;

    std::cout << "Digite um valor em reais: ";
    std::cin >> valor;

    notas_100 = valor / 100;
    valor %= 100;
    notas_50 = 50;
    valor %= 50;
    notas_20 = 20;
    valor %= 20;
    notas_10 = 10;
    valor %= 10;
    notas_5 = 5;
    notas_1 = valor;

    std::cout << "Notas de 100: " << notas_100 << "\n"; 
    std::cout << "Notas de 50: " << notas_50 << "\n";  
    std::cout << "Notas de 20: " << notas_20 << "\n";  
    std::cout << "Notas de 10: " << notas_10 << "\n";  
    std::cout << "Notas de 5: " << notas_5 << "\n";  
    std::cout << "Notas de 1: " << notas_1 << "\n";


    return 0;     
}