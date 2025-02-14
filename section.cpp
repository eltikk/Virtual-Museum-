#include <iostream>
#include <limits>
#include "Section.h"

void Section::display() const {
    while (true) {
        std::cout << "\nSection: " << name << "\n" << description << "\n";
        std::cout << "Select an exhibit to view details:\n";

        for (size_t i = 0; i < exhibits.size(); ++i) {
            std::cout << i + 1 << ". " << exhibits[i].getName() << "\n";
        }
        std::cout << "0. Back\n";

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (std::cin.fail() || choice < 0 || choice > exhibits.size()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please try again.\n";
            continue;
        }

        if (choice == 0) break;

        exhibits[choice - 1].display();
    }
}

