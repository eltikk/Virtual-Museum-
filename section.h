#ifndef SECTION_H
#define SECTION_H

#include <vector>
#include <string>
#include "Exhibit.h"

class Section {
private:
    std::string name;
    std::string description;
    std::vector<Exhibit> exhibits;
public:
    Section(const std::string& name, const std::string& description)
        : name(name), description(description) {}

    void addExhibit(const Exhibit& exhibit) { exhibits.push_back(exhibit); }
    void display() const;
    std::string getName() const { return name; }
};

#endif // SECTION_H

