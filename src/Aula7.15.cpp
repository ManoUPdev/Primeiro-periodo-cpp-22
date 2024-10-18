#include <iostream>

int main() {
    float receita, despesa;

    std::cout << "Digite a receita da firma: ";
    std::cin >> receita;

    std::cout << "Digite a despesa da firma: ";
    std::cin >> despesa;

    if (receita > despesa) {
        std::cout << "A firma teve lucro." << std::endl;
    } else if (receita < despesa) {
        std::cout << "A firma teve prejuizo." << std::endl;
    } else {
        std::cout << "A firma nao teve lucro nem prejuizo (empate)." << std::endl;
    }

    return 0;
}

