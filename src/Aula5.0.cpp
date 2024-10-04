#include <iostream>
#include <string>

const std::string HISTORIA_INICIAL = "Era uma vez, em um reino distante, um valente caveleiro chamado Arthur.";
const std::string HISTORIA_CONTINUA = "Ele tinha um fiel escuedeiro chamado Tomas. Juntos, eles enfrentavam grandes aventuras.";
const std::string DESFECHO = "Um dia, eles se depararam com um dragao";
const std::string VITORIA = "Com coragem e inteligencia, Arthur e Tomas conseguiram derrotar o dragao e salvar a aldeia.";
const std::string CONCLUSAO = "E assim, o reino viveu em paz, e Arthur se tornou uma lenda.";

void contarHistoria() {
    std::cout << HISTORIA_INICIAL << std::endl;
    std::cout << "\t" << HISTORIA_CONTINUA << std::endl;
    std::cout << "\t" << DESFECHO << std::endl;
    std::cout << "\t" << VITORIA << std::endl;
    std::cout << "\t" << CONCLUSAO << std::endl;
}

void contarHistoriaInterativa() {
    std::string resposta;
    std::cout << "Voce quer saber mais sobre a aventura de Arthur e Tomas? (sim/nao): ";
    std::getline(std::cin, resposta);

    if (resposta == "sim") {
        contarHistoria();
    } else {
        std::cout << "Tudo bem! Ate a proxima!" << std::endl;
    }
}

int main () {
    std::cout << "Bem-vindo a historia de Arthur e Tomas!" << std::endl;
    contarHistoriaInterativa();


    return 0;
}