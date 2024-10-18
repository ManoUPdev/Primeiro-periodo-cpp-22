#include <iostream>

int main() {
    int soma = 0;
    for(int i = 1; i <= 100; i++) {
        soma += i;
    }
    std::cout << "A soma de todos os numeros entre 1 e 100 e: " << soma << std::endl;
    return 0;
}

