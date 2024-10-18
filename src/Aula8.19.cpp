#include <iostream>

unsigned long long fatorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++){
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;


    std::cout << "Digite o numero de valores a serem lidos: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int valor;
        std::cout << "Digite um valor: ";
        std::cin >> valor;


        std::cout << "Fatorial de " << valor << " e: " << fatorial(valor) << std::endl;
    }


    return 0;
}

