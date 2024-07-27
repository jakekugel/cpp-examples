// Calculate a factorial.
//
// gcc:
//     g++ factorial.cpp -o factorial.out
//
// clang on Windows:
//     clang++ -Wall -std=c++14 factorial.cpp -o factorial.exe
//     .\factorial.exe

#include<iostream>

int calc_factorial(int number) {
	int factorial = 1;

	for (int i = 2; i <= number; i++) {
		factorial = factorial * i;
	}

	return factorial;
}

int main() {
	int number;

	std::cout << "Enter number: ";
	std::cin >> number;

	int factorial = calc_factorial(number);

	std::cout << "Factorial of " << number << " is: " << factorial << std::endl;
}
