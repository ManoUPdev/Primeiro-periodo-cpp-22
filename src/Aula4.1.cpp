#include <iostream>

int main() {
	int A, B, temp;
	std::cout << "Digite o valor de A: ";
	std::cin >> A;
	std::cout << "Digite o valor de B: ";
	std::cin >> B;
	
	//Permuta
	temp = A;
	A = B;
	B = temp;
	
	std::cout << "Agora, A = " << A << " B = " << B << std::endl;
	
	return 0;
}
