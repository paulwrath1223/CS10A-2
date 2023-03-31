//
// Created by paulw on 3/30/2023.
//
#include <iostream>
#include "math-functions.cpp"

int main()
{
    srand(time(nullptr));
    double a, b;
    generateOperands(a, b);
    std::cout << std::endl << a << std::endl << b;
}