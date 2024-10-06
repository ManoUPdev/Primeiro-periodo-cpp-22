#include <iostream>
#include <cstdlib>
#include <ctime>

int main () {
    srand(static_cast<unsigned int>(time(0))); //Semente para numeros aleatorios

    int num1 = rand() % 100; //Numero aleatorio entre 0 a 99
    int num2 = rand() % 100; //Numero aleatorio entre 0 a 99

    std::cout << "Bem vindo ao Calculator Tabajara!!" << std::endl;
    std::cout << "Qual o resultado para " << num1 << " + " << num2 << " ? " << std::endl;

    int resposta;
    std::cin >> resposta;

    if (resposta == num1 + num2) {
        std::cout << "Correto! Muito bem!" << std::endl;
    } else {
        std::cout << "Incorreto! O resultado correto e " << (num1 + num2) << "." << std::endl;
}

return 0;

}
