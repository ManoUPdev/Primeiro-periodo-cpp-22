#include <iostream>

int main() {
    float indice;

    std::cout << "Digite o indice de poluicao: ";
    std::cin >> indice;

    if (indice >= 0.65 && indice < 0.25) {
        std::cout << "Indice aceitavel." << std::endl;
    } else if (indice >= 0.3 && indice < 0.4) {
        std::cout << "Industrias do 1 grupo devem suspender atividades." << std::endl;
    } else if (indice >= 0.4 && indice < 0.5) {
        std::cout << "Industrias do 1 grupo e 2 grupo devem suspender atividades." << std::endl;
    } else if (indice >= 0.5) {
        std::cout << "Todos os grupos devem paralisar atividades." << std::endl;
    } else {
        std::cout << "Indice invalido." << std::endl;
}

    return 0;
}    