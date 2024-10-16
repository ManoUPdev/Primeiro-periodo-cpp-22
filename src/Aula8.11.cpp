#include <iostream>

unsigned long long fatorial(int i) {
    unsigned long long resultado = 1;
    for(int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    char continuar;

    do{
        std::cout << "Digite um numero para calcular o fatorial: ";
        std::cin >> numero;

        if(numero < 0) {
            std::cout << "Numero invalido. Digite um numero nao negativo." << std::endl;
        } else {
            std::cout << "Fatorial de " << numero << " e: " << fatorial(numero) << std::endl;
        }
        
        std::cout << "Deseja calcular outro fatorial? (s/n): ";
        std::cin >> continuar;
    } while (continuar == 's' || continuar == 'S');


    return 0;

    }
