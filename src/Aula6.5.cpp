#include <iostream>

int main() {
    int totalDias, dias;

    std::cout << "Digite sua idade em dias: ";
    std::cin >> totalDias;

    int anos = totalDias / 365;
    totalDias = totalDias % 365;
    int meses = totalDias / 30;
    dias = totalDias % 30;

    std::cout << "Sua idade e: " << anos << " anos, "  << meses << "meses e " << dias << " dias. " << std::endl;

    return 0;
}

