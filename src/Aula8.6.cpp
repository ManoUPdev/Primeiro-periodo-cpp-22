#include <iostream>

int main() {
    std::cout << "Numeros divisiveis por entre 5 entre 0 e 200:\n";
    for(int i = 5; i <= 200; i += 5) {
        std::cout << i << std::endl;
    }
    return 0;
}

