#include <iostream>

int main() {
    int num, soma = 0, count = 0;

    std::cout << "Digite numeros (digite 0 para parar):\n";
    while(true) {
        std::cin >> num;
        if(num == 0) break;

        if(num % 2 == 0) {
            soma += num;
            count++;
        }
    }

    if(count > 0) {
        std::cout << "Media dos numeros pares: " << (static_cast<float>(soma) / count) << std::endl;
    } else {
        std::cout << "Nenhum numero par foi digitado." << std::endl;
    }

    return 0; 
}

