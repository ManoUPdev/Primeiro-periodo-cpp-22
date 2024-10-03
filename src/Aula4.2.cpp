#include <iostream>

int main() {
    double N1 = 8, N2 = 7.5, N3 = 10, N4 = 9;
    double media = (N1 * 1 + N2 * 2 + N3 * 3 + N4 * 4) / 10;
    
    std::cout << "Notas do aluno: " << std::endl;
    std::cout << "N1: " << N1 << ", N2: " << N2 << ", N3: " << N3 << ", N4: " << N4 << std::endl;
    std::cout << "Media ponderada: " << media << std::endl;
    return 0;
}
