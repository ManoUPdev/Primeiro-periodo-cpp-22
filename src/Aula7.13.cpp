#include <iostream>

int main() {
    int idade;

    std::cout << "Digite a idade do nadador: ";
    std::cin >> idade;

    if (idade >= 5 && idade <= 7) {
        std::cout << "Categoria: Infantil A" << std::endl;
    } else if (idade >= 8 && idade <= 11) {
        std::cout << "Categoria: Infantil B" << std::endl;
    } else if (idade >= 12 && idade <= 13) {
        std::cout << "Categoria: Juvenil A" << std::endl;
    } else if (idade >= 14 && idade <= 17) {
        std::cout << "Categoria: Juvenil B" << std::endl;
    } else if (idade >= 18) {
        std::cout << "Categoria: Adulto" << std::endl;
    } else {
        std::cout << "Idade fora das categorias." << std::endl;
    }

    return 0;
}
