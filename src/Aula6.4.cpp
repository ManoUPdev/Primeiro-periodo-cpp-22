#include <iostream>

int main() {
    int anos, meses, dias;

    std::cout << "Digite sua idade em anos: ";
    std::cin >> anos;
    std::cout << "Digite sua idade em meses: ";
    std::cin >> meses;
    std::cout << "Digite sua idade em dias: ";
    std::cin >> dias;

    int idadeTotalEmDias = (anos * 365) + (meses * 30) + dias; //Aproximado meses para 30 dias
    std::cout << "Sua idade em dias e: " << idadeTotalEmDias << std::endl;

    return 0;
}