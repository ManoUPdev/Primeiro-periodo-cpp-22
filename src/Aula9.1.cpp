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
            std::cin >> num2;
        }

        std::cout << "Resultado da divisão: " << (float)num1 / num2 << std::endl;
        contCalculos++;

        std::cout << "VOCE DESEJA OUTRO CALCULO (S/N)?";
        std::cin >> continuar;

        while (continuar != 'S' && continuar != 'N') {
            std::cout << "Resposta invalida! Por favor, digite S ou N: ";
            std::cin >> continuar;
        }
        } while (continuar == 'S');
        
        std::cout << "Total de calculos realizados: " << contCalculos << std::endl;

        return 0;
    
    }

