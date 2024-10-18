#include <iostream>

int main() {
    int num, count = 0;
    float soma = 0;

    std::cout << "Digite valores positivos (digite um numero negativo para parar):\n";
    while(true) {
        std::cin >> num;
        if (num < 0) break;
        soma += num;
        count++;
    }

    if(count > 0) {
        std::cout << "Media aritmetica: " << (soma / count) << std::endl;
    } else {
        std::cout << "Nenhum valor positivo foi digitado." << std::endl;
    }
    return 0;    
}

