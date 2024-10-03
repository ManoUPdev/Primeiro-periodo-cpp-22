#include <iostream>
#include <cmath>

int main() {
    double raio, area;
    const double PI = 3.14159;

    std::cout << "Digite o raio da circuferencia: ";
    std::cin >> raio;

    area = PI * pow(raio, 2);

    std::cout << "A area da circuferencia e: " << area << std::endl;
    return 0;
}