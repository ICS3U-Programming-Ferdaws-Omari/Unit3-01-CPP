// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Ferdaws
// Created on: March 25, 2022
// This program calculates total from subtotal and tax

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates total from subtotal and tax
    const float HST = 0.05;
    float tax;
    float subTotal;
    float total;

    // input
    std::cout << "Enter the subtotal: $";
    std::cin >> subTotal;

    // calculate the tax amount and the total with tax
    tax = + subTotal * HST;
    total = subTotal + tax;

    // output
    std::cout << "" << std::endl;
    std::cout << "The HST is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << tax << ", and the total cost is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << "." << std::endl;
}
