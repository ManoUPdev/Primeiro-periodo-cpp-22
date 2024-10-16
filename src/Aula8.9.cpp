#include <iostream>

int main() {
    int dentro = 0, fora = 0, valor;

    std::cout << "Digite 10 valores:\n";
    for(int i = 0; i < 10; i++) {
        std::cin >> valor;
        if(valor >= 10 && valor <= 20) {
            dentro++;
        } 
        } else {
            fora++;
    }

    std::cout << "Dentro do intervalo [10, 20]: " << dentro << std::endl;
    std::cout << "Fora do intervalo: " << fora << std::endl;

return 0;

}
