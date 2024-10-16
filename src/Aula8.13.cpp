#include <iostream>
#include <iomanip>

int main() {
    int termos = 50;
    float soma1 = 0, soma2 = 0; soma3 = 0;

    // 1+ 3+ 9+ 27 + 81 + ...
    for (int i = 0; i < termos; i++) {
        soma1 += pow(3, i);
    }

    // 1/1 + 2/4 + 3/9 + 4/16 + 5/25 + ...
    for (int i = 1; i <= termos; i++) {
        soma2 += static_cast<float>(i) / (i * i);
    }
    
}
    