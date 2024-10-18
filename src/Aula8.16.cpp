#include <iostream>

unsigned long long fatorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int N;
    double E = 1.0;

    std::cout << "Digite um valor N inteiro e positivo: ";
    std::cin >> N;

    for (int i = 1; i <= N; i++) {
        E += 1.0 / fatorial(i);
    }

    std::cout << "O valor de E e: " << E << std::endl;

    return 0;
}
