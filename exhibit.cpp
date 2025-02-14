#include <iostream>
#include "Exhibit.h"

void Exhibit::display() const {
    std::cout << "\n=== " << name << " ===\n"
              << description << "\n"
              << "Category: " << category << "\n"
              << "Era: " << era << "\n"
              << "Year: " << year << "\n"
              << "Location: " << location << "\n\n";
    std::cout << "Press Enter to go back...";
    std::cin.ignore();
    std::cin.get(); // Wait for user input
}

