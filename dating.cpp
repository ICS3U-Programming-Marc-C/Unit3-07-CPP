// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: April, 2022
// This is a program to find out if you can date the grandchild

#include <iostream>

int main() {
    // Declaring variables
    std::string userInput;
    std::string userInput2;

    // Ask users if they are rich and good looking
    std::cout << "Are you rich? (y/n) : ";
    std::cin >> userInput;
    std::cout << "Are you good looking? (y/n) : ";
    std::cin >> userInput2;

    // Checking if user can date grandchild
    if (userInput == "y" && userInput2 == "y") {
    std::cout << "You can date my grandchild.\n";
}   else if (userInput == "n" && userInput2 == "y") {
    std::cout << "You can date my grandchild.\n";
}   else if (userInput == "y" && userInput2 == "n") {
    std::cout << "You can date my grandchild.\n";
}   else if (userInput == "n" && userInput2 == "n") {
    std::cout << "You cannot date my grandchild.\n";
}   else {
       std::cout << "Invalid input!\n";
}
}
