#include <iostream>

int main () {
    float X, Y, Z;

    std::cout << "Digite os tres lados do triangulo: ";
    std::cin >> X >> Y >> Z;

    if((X + Y > Z) && (X + Z > Y) && (Y + Z < X)) {
        std::cout << "Os lados formam um triangulo." << std::endl;

        if (X == Y && Y == Z) {
            std::cout << "O triangulo e Equilatero." << std::endl;
        } else if (X == Y || X == Z || Y == Z) {
            std::cout << "O triangulo e Isosceles." << std::endl;
        } else {
            std::cout << "O triangulo e Escaleno." << std::endl;
        }

    } else {
        std::cout << "Os lados nao formam um triangulo." << std::endl;
    }

    return 0;
}

