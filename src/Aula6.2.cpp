#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0))); // Semente para números aleatórios

    int num1 = rand() % 100;
    int num2 = rand() % 100;
    int operacao = rand() % 4; // 0 - soma, 1 - subtração, 2 - multiplicação, 3 - divisão

    std::cout << "Bem-vindo ao Calculator Tabajara!!" << std::endl;

    if (operacao == 0) {
        std::cout << "Qual o resultado para " << num1 << " + " << num2 << " ?" << std::endl;
    } else if (operacao == 1) {
        std::cout << "Qual o resultado para " << num1 << " - " << num2 << " ?" << std::endl;
    } else if (operacao == 2) {
        std::cout << "Qual o resultado para " << num1 << " * " << num2 << " ?" << std::endl;
    } else {
        // Evitar divisão por zero
        if (num2 == 0) num2 = 1; 
        std::cout << "Qual o resultado para " << num1 << " / " << num2 << " ?" << std::endl;
    }

    int resposta;
    std::cin >> resposta;

    int resultado;
    if (operacao == 0) resultado = num1 + num2;
    else if (operacao == 1) resultado = num1 - num2;
    else if (operacao == 2) resultado = num1 * num2;
    else resultado = num1 / num2;

    if (resposta == resultado) {
        std::cout << "Correto! Muito bem!" << std::endl;
    } else {
        std::cout << "Incorreto! O resultado correto e " << resultado << "." << std::endl;
    }

    return 0;
}
