// Implementation of quicksort algorithm.
//
// Jake Kugel

#include <iostream>
#include <stdlib.h>

int main() {
    int numbers[100];

    // Assign random values between 0 and 1000000
    int denominator = RAND_MAX / 1000000;
    for (int i = 0; i < 100; i++) {
        numbers[i] = rand() / denominator;
	std::cout << i << ": " << numbers[i] << std::endl;
    }

    return 0;
}

void sort(numbers, low, high) {
    int splitPosition = split(numbers, low, high);

    sort(numbers, low, splitPosition - 1);
    sort(number, splitPosition + 1, high);
}

void split(numbers, low, high) {
    
