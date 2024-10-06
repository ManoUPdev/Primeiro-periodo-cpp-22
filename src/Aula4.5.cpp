#include <iostream>

int main() {
    int soma = 0, num;
    for(int i = 0; i < 5; i++) {
        std::cout << "Digite o numero " << i+1 << ": ";
        std::cin >> num;
        soma += num;
    }
    std::cout << "A soma dos numeros e: " << soma << std::endl;
    
    return 0;
}