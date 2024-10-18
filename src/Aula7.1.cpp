#include <iostream>

int main() {
    bool A, B, C;

    // 1ª linha da tabela
    A = true; B = false; C = true;
    std::cout << "Linha 1: " << std::endl;
    std::cout << "A && (B || C): " << (A && (B || C)) << std::endl;
    std::cout << "A && !C: " << (A && !C) << std::endl;
    std::cout << "B || C || A: " << (B || C || A) << std::endl;
    std::cout << "A && B && C: " << (A && B && C) << std::endl;
    std::cout << "C && (B || A): " << (C && (B || A)) << std::endl;

    // 2ª linha da tabela
    A = false; B = true; C = true;
    std::cout << "\nLinha 2: " << std::endl;
    std::cout << "A && (B || C): " << (A && (B || C)) << std::endl;
    std::cout << "A && !C: " << (A && !C) << std::endl;
    std::cout << "B || C || A: " << (B || C || A) << std::endl;
    std::cout << "A && B && C: " << (A && B && C) << std::endl;
    std::cout << "C && (B || A): " << (C && (B || A)) << std::endl;

    // 3ª linha da tabela
    A = true; B = true; C = false;
    std::cout << "\nLinha 3: " << std::endl;
    std::cout << "A && (B || C): " << (A && (B || C)) << std::endl;
    std::cout << "A && !C: " << (A && !C) << std::endl;
    std::cout << "B || C || A: " << (B || C || A) << std::endl;
    std::cout << "A && B && C: " << (A && B && C) << std::endl;
    std::cout << "C && (B || A): " << (C && (B || A)) << std::endl;

    // 4ª linha da tabela
    A = true; B = false; C = false;
    std::cout << "\nLinha 4: " << std::endl;
    std::cout << "A && (B || C): " << (A && (B || C)) << std::endl;
    std::cout << "A && !C: " << (A && !C) << std::endl;
    std::cout << "B || C || A: " << (B || C || A) << std::endl;
    std::cout << "A && B && C: " << (A && B && C) << std::endl;
    std::cout << "C && (B || A): " << (C && (B || A)) << std::endl;

    return 0;
}

