// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Paul M
// Created on: October 2019
// This lets the user guess a number

#include <iostream>
#include <string>

int main() {
    // this function plays a game
    std::string numberGuessedString;
    int numberGuessedinteger;
    int number;

    // random number
    number = (rand() % 10) + 1;

    // input
    std::cout << "Pick a number between 0 and 9: ";
    std::cin >> numberGuessedString;

    // process & output
    try {
        numberGuessedinteger = std::stoi(numberGuessedString);
        if (numberGuessedinteger == number) {
            std::cout << "" << std::endl;
            std::cout << "Congrats! You are correct." << std::endl;
        } else if (numberGuessedinteger != number) {
            std::cout << "" << std::endl;
            std::cout << "You are incorrect." << std::endl;
            std::cout << "My number was "<< (number) << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter an integer" << std::endl;;
    }
}
