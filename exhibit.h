#ifndef EXHIBIT_H
#define EXHIBIT_H

#include <string>

class Exhibit {
private:
    std::string name;
    std::string description;
    std::string category;
    std::string era;
    int year;
    std::string location;
public:
    Exhibit(const std::string& name, const std::string& description, 
            const std::string& category, const std::string& era, 
            int year, const std::string& location)
        : name(name), description(description), category(category), 
          era(era), year(year), location(location) {}

    void display() const;
    std::string getName() const { return name; }
};

#endif // EXHIBIT_H

