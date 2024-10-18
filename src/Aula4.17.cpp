#include <iostream>

int main() {
    double salario_minimo, valor_dolar, custo_casa;
    int total_dolares = 10000000;

    std::cout << "Digite o valor do salario minimo: ";
    std::cin >> salario_minimo;
    std::cout << "Digite o valor do dolar: ";
    std::cin >> valor_dolar;

    custo_casa = 150 * salario_minimo;
    int casas_construidas = total_dolares * valor_dolar / custo_casa;

    std::cout << "Quantidade de casas que podem ser construidas: " << casas_construidas << std::endl;

    return 0;
}

