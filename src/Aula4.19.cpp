#include <iostream>

int main() {
    double IPI, valor1, valor2;
    int cod1, cod2, qtd1, qtd2;

    std::cout << "Digite a porcentagem o IPI: ";
    std::cin >> IPI;

    std::cout << "Digite o codigo da peca 1, valor unitario e quantidade: ";  
    std::cin >> cod1 >> valor1 >> qtd1;

    std::cout << "Digite o codigo da peca 2, valor unitario e quantidade: ";
    std::cin >> cod2 >> valor2 >> qtd2;

    double total = (valor1 * qtd1 + valor2 * qtd2) * (IPI / 100 + 1);

    std::cout << "Valor total a ser pago: " << total << std::endl;

    return 0;
}
