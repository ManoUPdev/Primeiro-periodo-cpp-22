#include <iostream>

int main() {
    int num, positivos = 0, negativos = 0, pares = 0, impares = 0;
    int maior, menor;

    for(int i = 0; i < 30; i++) {
        std::cout << "Digite um numero: ";
        std::cin >> num;

        if(num > 0) positivos++;
        else if (num < 0) negativos++;

        if(num % 2 == 0) pares++;
        else impares++; 

        if(i == 0) {
            maior = menor = num;
        } else {
            if(num > maior) maior = num;
            if(num < menor) menor = num;
        }
    }

    std::cout << "Positivos: " << positivos << std::endl;
    std::cout << "Negativos: " << negativos << std::endl;
    std::cout << "Pares: " << pares << std::endl;
    std::cout << "Impares: " << impares << std::endl;
    std::cout << "Maior: " << maior << std::endl;
    std::cout << "Menor: " << menor << std::endl;
}

