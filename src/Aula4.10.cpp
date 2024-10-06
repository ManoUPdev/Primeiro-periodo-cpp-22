#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    std::cout << "Soma: " << num1 + num2 << std::endl;
    std::cout << "Diferenca: " << num1 - num2 << std::endl;
    std::cout << "Produto: " << num1 * num2 << std::endl;
    if(num2 != 0) {
    std::cout <<"Divisao: " << num1 / num2 << std::endl;
    
    } else {

    std::cout << "Erro: Divisao por zero nao e permitida." << std::endl;

}

    return 0;

}
