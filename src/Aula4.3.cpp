#include <iostream>

int main(){
    double distancia_diaria = 0.8 * 2; // ida e volta (800m = 0.8km)
    int dias_semana = 5, semanas_ano = 45;

    double distancia_total = distancia_diaria * dias_semana * semanas_ano;

    std::cout << "Distancia percorrida ao final do ano: " << distancia_total << " km" << std::endl;

    return 0;
}

