#include <iostream>

int main() {
    int num_funcionario, horas_trabalhadas;
    double valor_por_hora, salario;

    std::cout << "Digite o numero do funcionario: ";
    std::cin >> num_funcionario;

    std::cout << "Digite o numero de horas trabalhadas: ";
    std::cin >> horas_trabalhadas;

    std::cout << "Digite o valor por hora: ";  
    std::cin >> valor_por_hora;

    salario = horas_trabalhadas * valor_por_hora;

    std::cout << "O salario do funcionario " << num_funcionario << " e: " << salario << std::endl;
    
    return 0; 
}