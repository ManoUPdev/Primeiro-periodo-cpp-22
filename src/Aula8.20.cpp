#include <iostream>

int main() {
    int m, n;

    while (true) {
        std::cout << "Digite os valores m e n (inteiros e positivos): ";
        std::cin >> m >> n;

        if (m <= 0 || n <= 0)break;


        int soma = 0;
        for (int i = m; i < m + n; i++) {
            soma += i;
        }


        std::cout << "A soma dos " << n << " inteiros consecutivos a partir de " << m << "e: " << soma << std::endl;
    }

    return 0;
}

