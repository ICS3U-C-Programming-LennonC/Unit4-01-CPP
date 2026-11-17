// Copyright (c) 2026 Lennon Cehajic All rights reserved.
// Created by: Lennon Cehajic
// Date: November 10th, 2026
// This program calculates the sum  of numbers from 0 
// to a positive whole number entered by the user.

#include <iostream>
#include <string>

int main() {
    // Declare variables
    int total, counter, userInt;
    std::string userNum;
    total = 0;
    counter = 0;

    // Get user input
    std::cout << "Enter a positive integer: ";
    std::cin >> userNum;

    // Try casting user input to int 
    try {
        float userFloat = std::stof(userNum);

        // Check if number is positive whole number
        if (userFloat != static_cast<int>(userFloat) || userFloat <= 0) {
            std::cout << "Please enter a positive whole number\n";
            return 0;
        }

        // If it passes, convert it to your int variable
        userInt = static_cast<int>(userFloat);
        while (userInt >= counter) {
            std::cout << "Tracking " << counter << " times through the loop \n";
            total = total + counter;
            counter = counter + 1;
        }
        std::cout << "The sum of the numbers from 0-";
        std::cout << userInt << " is " << total << std::endl;
    } catch (std::invalid_argument) {
        std::cout << userNum << " is not a valid integer input";
    }
}
