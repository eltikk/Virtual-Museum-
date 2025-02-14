#include <iostream>
#include <limits> 
#include "Museum.h"
using namespace std;

void Museum::display() const {
    while (true) {
        cout << "\nWelcome to the " << name << "!\n";
        cout << "Select a section:\n";

        for (size_t i = 0; i < sections.size(); ++i) {
            cout << i + 1 << ". " << sections[i].getName() << "\n";
        }
        cout << "0. Exit\n";

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail() || choice < 0 || choice > sections.size()) {
            cin.clear(); 
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Vlere e gabuar. Shkruani nje vlere te sakte.\n";
            continue;
        }

        if (choice == 0) break;

        sections[choice - 1].display();
    }
}

