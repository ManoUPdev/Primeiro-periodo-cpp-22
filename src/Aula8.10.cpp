#include <iostream>

bool ehPrimo(int num) {
    if(num <= 1) return false;
    for(int = 2; i * i <= num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}
int main() {
    int numero;

    std::cout << "Digite um numero: ";
    std::cin >> numero;

    if (ehPrimo(numero)) {
        std::cout << numero << " e um numero primo." << std::endl;
    } else {
        std::cout << numero << " nao e um numero primo." << std::endl;   
  }

    return 0;
}