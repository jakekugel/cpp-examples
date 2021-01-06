// Calculate a factorial.
//
// Jake Kugel
//
// g++ factorial.cpp -o factorial.out

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