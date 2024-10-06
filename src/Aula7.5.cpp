#include <iostream>

int main() {
    char sexo;
    float altura, pesoIdeal;

    std::cout << "Digite o sexo (M para masculino, F para feminino): ";
    std::cin  >> sexo;

    std::cout << "Digite a altura: ";
    std::cin  >> altura;

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    }else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        std::cout << "Sexo invalido." << std::endl;
        return 1;
}

        std::cout << "O peso ideal e: " << pesoIdeal << " kg " << std::endl; 

        return 0;
}