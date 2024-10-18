#include <iostream>
#include <iomanip>
#include <cmath>  

int main() {
    int termos = 50;
    float soma1 = 0, soma2 = 0, soma3 = 0;

    // 1 + 3 + 9 + 27 + 81 + .... (Geometric series with base 3)
    for (int i = 0; i < termos; i++) {
        soma1 += pow(3, i);
    }

    // 1/1 + 2/4 + 3/9 + 4/16 + 5/25 + .... 
    for (int i = 1; i <= termos; i++) {
        soma2 += static_cast<float>(i) / (i * i); 
    }

    // 1 - 2 + 3 - 4 + 5 - 6 +..... 
    for (int i = 1; i <= termos; i++) {
        if (i % 2 == 0) {
            soma3 -= i;
        } else {
            soma3 += i;
        }
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Soma da serie 1: " << soma1 << std::endl;
    std::cout << "Soma da serie 2: " << soma2 << std::endl;
    std::cout << "Soma da serie 3: " << soma3 << std::endl;

    return 0;
}

