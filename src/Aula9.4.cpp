#include <iostream>

int main() {
    float alturaChico = 1.5, alturaZezinho = 1.1
    int anos = 0;

    while (alturaZezinho <= alturaChico){
        alturaChico += 0.02; // Cresce 3 cm
        alturaZezinho += 0.03; // Cresce 3 cm
        anos++;
    }

    std::cout << "Ze será maior que o Chico em " << anos << "anos." << std::endl;

    return 0;
}