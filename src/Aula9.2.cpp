#include <iostream>

bool ehPerfeito(int n){
    int soma = 0;
    for (int i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            soma += i;
        }
    }
    return soma == n;    
}

int main(){
    int cont = 0, numero = 1;

    std::cout << "Os 5 primeiros numeros perfeitos:\n";
    while (cont < 5) {
        if(ehPerfeito(numero)) {
            std::cout << numero << std::endl;
            cont++;
        }
        numero++;
    }

    return 0;
}