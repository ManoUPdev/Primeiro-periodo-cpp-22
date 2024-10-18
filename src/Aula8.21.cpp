#include <iostream>

int main() {
    for(int i = 0; i < 5; i++) {
        int a, b;

        std::cout << "Digite dois numeros inteiros e positivos (a e b, com a <= b): ";
        std::cin >> a >> b;

        if (a > b) std::swap(a,b);

        std::cout << "Numeros pares entre " << a << " e " << b << ":\n";
        for (int j = a; j <= b; j++) {
            if (j % 2 == 0) {
                std::cout << j << " ";
            }
        }
        std::cout << std::endl;
    
    }

    return 0;
}

