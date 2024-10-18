#include <iostream>

int main() {
    int soma = 0;
    for(int i = 1; i <= 100; i += 2) {
        soma += i;
    }
    std::cout << "A soma dos numeros impares entre 1 e 100 e: " << soma << std::endl;
    return 0;
}

