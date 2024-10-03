#include <iostream>

int main() {
    double marido, esposa, total, valor_devido_marido, valor_devido_esposa, saldo_marido, saldo_esposa;

    std::cout << "Digite o valor das despesas do marido: ";
    std::cin >> marido;
    std::cout << "Digite o valor das despesas da esposa: ";
    std::cin >> esposa;

    total = marido + esposa;
    valor_devido_marido = total * 0.60;
    valor_devido_esposa = total * 0.40;
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

