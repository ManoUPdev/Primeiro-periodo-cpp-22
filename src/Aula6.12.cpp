#include <iostream>

int main() {
    int golsTime1, golsTime2;

    std::cout << "Digite os gols do Time 1:";
    std::cin >> golsTime1;
    std::cout << "Digite os gols do Time 2:";
    std::cin >> golsTime2;

    if (golsTime1 == golsTime2) {
        std::cout << "Empate!" << std::endl;
    } else if (golsTime1 > golsTime2) {
        std::cout << "Vitoria do Time 1" << std::endl;
    } else {
        std::cout << "Vitoria do Time 2" << std::endl;
    }
    
    return 0;

}