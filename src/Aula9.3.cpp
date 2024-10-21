#include <iostream>

int main() {
    const int NUM_JOGADORES = 20;
    int id[NUM_JOGADORES], vitorias[NUM_JOGADORES];
    int maxVitorias = 0, minVitorias = INT_MAX;
    int idMax, idMin;

    for (int i = 0; i < NUM_JOGADORES; i++) {
        std::cout << "Digite o ID do jogador " << (i + 1) << ": ";
        std::cin >> id[i];
        std::cout << "Digite o numero de vitorias do jogador " << id[i] << ": ";
        std::cin >> vitorias[i];

        if(vitorias[i] > maxVitorias) {
            maxVitorias = vitorias[i];
            idMax = id[i];
        }

        if(vitorias[i] < minVitorias) {
            minVitorias = vitorias[i]
            idMin = id[i];
        }
    }

    std::cout << "Jogador com mais vitorias: ID " << idMax << " com " << maxVitorias << "vitorias." << std::endl;
    std::cout << "Jogador com menos vitorias: ID " << idMin << " com " << minVitorias << "vitorias." << std::endl;

    return 0;
}