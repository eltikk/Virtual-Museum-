#ifndef MUSEUM_H
#define MUSEUM_H

#include <vector>
#include <string>
#include "Section.h"

class Museum {
private:
    std::string name;
    std::vector<Section> sections;
public:
    Museum(const std::string& name) : name(name) {}
    void addSection(const Section& section) { sections.push_back(section); }
    void display() const;
};

#endif // MUSEUM_H

