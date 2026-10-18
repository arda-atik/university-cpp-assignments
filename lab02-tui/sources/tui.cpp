#include <iostream>
#include <cctype>
#include "../headers/tui.h"

char menu() {
    char choice;
    std::cout << "\nMenu:\n"
              << "[N] New\n"
              << "[O] Open\n"
              << "[C] Close\n"
              << "[Q] Quit\n"
              << "Select: ";
    std::cin >> choice;
    return (char)toupper(choice);
}

void error() {
    std::cerr << "Invalid option!\n";
}