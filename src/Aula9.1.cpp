#include <iostream>

int main() {
    int num1, num2;
    char continuar;
    int contCalculos = 0;

    do {
        std::cout << "Digite dois valores inteiros:\n";
        std::cin >> num1 >> num2;

        while (num2 == 0) {
            std::cout << "VALOR INVALIDO! O segundo valor nao pode ser zero. Digite Novamente"
        }
    }
}