#include <iostream>

int main() {
    int a, b, resultado = 1;

    std::cout << "Digite dois numeros inteiros e positivos:\n";
    std::cin >> a >> b;

    if(a > b) std::swap(a,b);

    for(int i = a; i <= b; i++) {
        resultado *= i;
    }

    std::cout << "Resultado da multiplicacao de " << a << " ate " << b << " e: " << resultado << std::endl;

    return 0;
}

