#include <iostream>

int main() {
    std::cout << "Numeros de 1000 a 1999 que, dividos por 11, dao resto 5:\n";
    for(int i = 1000; i < 2000; i++) {
        if(i % 11 == 5) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}