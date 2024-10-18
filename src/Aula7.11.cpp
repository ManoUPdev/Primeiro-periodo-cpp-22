#include <iostream>

int main() {
    float valorReais, valorConvertido;
    int tipoMoeda;
    const float cotacaoDolar = 5.0; // Exemplo de cotação do dólar
    const float cotacaoEuro = 6.0;  // Exemplo de cotação do euro

    std::cout << "Digite o valor em reais: ";
    std::cin >> valorReais;

    std::cout << "Digite o tipo de moeda para conversão (1 para Dolar, 2 para Euro): ";
    std::cin >> tipoMoeda;

    if (tipoMoeda == 1) {
        valorConvertido = valorReais / cotacaoDolar;
        std::cout << "Valor convertido em Dolares: " << valorConvertido << std::endl;
    } else if (tipoMoeda == 2) {
        valorConvertido = valorReais / cotacaoEuro;
        std::cout << "Valor convertido em Euros: " << valorConvertido << std::endl;
    } else {
        std::cout << "Tipo de moeda invalido." << std::endl;
    }

    return 0;
}

