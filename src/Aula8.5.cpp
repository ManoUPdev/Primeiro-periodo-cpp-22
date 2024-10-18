#include <iostream>

int main() {
    std::cout << "Quadrado dos numeros pares entre 1 e 1000:\n";
    for(int i = 2; i <= 1000; i += 2) {
        std::cout << i << "^2 = " << i * i << std::endl;
    }
    return 0;
}

