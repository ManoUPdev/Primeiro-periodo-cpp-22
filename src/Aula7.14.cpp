#include <iostream>

int main() {
    int idade;

    std::cout << "Digite a idade do nadador: ";
    std::cin >> idade;

    switch (idade) {
        case 5: case 6: case 7:
            std::cout << "Categoria: Infantil A" << std::endl;
            break;
        case 8: case 9: case 10: case 11:
            std::cout << "Categoria: Infantil B" << std::endl;
            break;
        case 12: case 13:
            std::cout << "Categoria: Juvenil A" << std::endl;
            break;
        case 14: case 15: case 16: case 17:
            std::cout << "Categoria: Juvenil B" << std::endl;
            break;
        default:
            if (idade >= 18) {
                std::cout << "Categoria: Adulto" << std::endl;
            } else {
                std::cout << "Idade fora das categorias." << std::endl;
            }
            break;
    }

    return 0;
}

