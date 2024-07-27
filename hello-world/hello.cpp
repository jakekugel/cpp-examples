// Simple Hello World to test compiler.
//
// clang on Windows:
//     clang++ -Wall -std=c++14 hello.cpp -o hello.exe
//     .\hello.exe

#include<iostream>

int main() {
	std::cout << "Hello World!\n";
	std::cout << "C++ version: ";
	std::cout << __cplusplus;
	std::cout << "\n";
}
