#include <iostream>
#include <vector>

std::vector<int> divisores(int n) {
    std::vector<int> divs;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            divs.push_back(i);
        }
    }
    return divs;
}

int somaDivisores(const std::vector<int>& divs) {
    int soma = 0;
    for (int d : divs) {
        soma += d;
    }
    return soma;
}

int main() {
    int num1, num2;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    std::vector<int> divs1 = divisores(num1);
    std::vector<int> divs2 = divisores(num2);

    int soma1 = somaDivisores(divs1);
    int soma2 = somaDivisores(divs2);

    std::cout << "Divisores de " << num1 << ": ";
    for (int d : divs1) {
        std::cout << d << " ";
    }
    std::cout << "(Soma: " << soma1 << ")\n";

    std::cout << "Divisores de " << num2 << ": ";
    for (int d : divs2) {
        std::cout << d << " ";
    }
    std::cout << "(Soma: " << soma2 << ")\n";

    if (soma1 == num2 && soma2 == num1) {
        std::cout << num1 << " e " << num2 << " sao numeros amigos." << std::endl;
    } else {
        std::cout << num1 << " e " << num2 << " não sao numeros amigos." << std::endl;
    }

    return 0;
}
