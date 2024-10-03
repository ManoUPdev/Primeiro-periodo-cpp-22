#include <iostream>

int main() {
    double marido, esposa, renda_marido, renda_esposa, total, prop_marido, prop_esposa, saldo_marido, saldo_esposa;

    std::cout << "Digite o valor das despesas do marido: ";
    std::cin >> marido;
    std::cout << "Digite o valor das despesas da esposa: ";
    std::cin >> esposa;
    std::cout << "Digite a renda do marido: ";
    std::cin >> renda_marido;
    std::cout << "Digite a renda da esposa: ";
    std::cin >> renda_esposa;

    total = marido + esposa;
    prop_marido = renda_marido / (renda_marido + renda_esposa);
    prop_esposa = 1 - prop_marido;

    double valor_devido_marido = total * prop_marido;
    double valor_devido_esposa = total * prop_esposa;

    saldo_marido = marido - valor_devido_marido;
    saldo_esposa = esposa - valor_devido_esposa;

    std::cout << "\nITEM               MARIDO    ESPOSA     TOTAL\n";
    std::cout << "================== =======   ========   ========\n";
    std::cout << "Despesas pagas     " << marido << "   " << esposa << "   " << total << std::endl;
    std::cout << "% pago             " << (marido / total) * 100 << "   " << (esposa / total) * 100 << "   100\n";
    std::cout << "Valor devido       " << valor_devido_marido << "   " << valor_devido_esposa << "   " << total << std::endl;
    std::cout << "Saldo              " << saldo_marido << "   " << saldo_esposa << std::endl;

    return 0;
}
