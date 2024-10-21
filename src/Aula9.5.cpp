#include <iostream>

int main() {
    int n;
    int contagem[6] = [0]; // Contagem para cada face do dado (1 a 6)

    std::cout << "Digite o numero de lancamento: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int resultado;
        std::cout << "Digite o resultado do lancamentos: ";
        std::cin >> resultado;

        if (resultado >= 1 && resultado <= 6) {
            contagem[resultado - 1]++;
        } else {
            std::cout << "Resultado invalido! O resultado deve ser entre 1 e 6." << std::endl;
        }

    }
}