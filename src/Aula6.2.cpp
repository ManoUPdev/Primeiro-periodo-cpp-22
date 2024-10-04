#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    sprand(static_cast<unsigned int>(time(0))); // Semente para numeros aleatorios

    int num1 = rand() % 100;
    int num2 = rand() % 100;
    int operação = rand() % 4; //0 - 1 -subtracao, 2 - multiplicacao, 3 - divisao

    std::cout <<"Bem-vindo ao Calculator Tabajara!!" << std::endl;

    if (operação == 0) {
        std::cout << "Qual o resultado para " << num1 << " + " << num2 << " ?" << std::endl;
    } else if (operação == 1) {
        std::cout << "Qual o resultado para" << num1 << " - " << num2 << " ?" << std::endl;
    } else if (operação == 2) {
        std::cout << "Qual o "
    }
}