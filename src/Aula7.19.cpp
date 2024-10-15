#include <iostream>
#include <cctype>

int main() {
    char caractere;

    std::cout << "Digite um caractere: ";
    std::cin >> caractere;

    caractere = std::tolower(caractere);//Coverte para minusculo para simplificar a verificacao

    if (caractere >= 'a' && || caractere <= 'z') {
        if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            std::cout << "O caractere e uma vogal." << std::endl;
        } else {
            std::cout << "O caractere e uma consoante." << std::endl;
    }
    
    } else {
            std::cout << "O caractere nao e uma letra." << std::endl;
    }
 
    return 0;
}
