#include "Sea.h"

// Default constructor
Sea::Sea() : Ocean() {
    this->saltiness = 0;
}

// Constructor with parameters
Sea::Sea(string name, string location, double size, double depth, double surfaceArea, double saltiness)
        : Ocean(name, location, size, depth, surfaceArea) {
    this->saltiness = saltiness;
}

// Overloaded input operator
istream& operator>>(istream& in, Sea& sea) {
    in >> sea.name >> sea.location >> sea.size >> sea.depth >> sea.surfaceArea >> sea.saltiness;
    return in;
}

// Overloaded output operator
ostream& operator<<(ostream& out, const Sea& sea) {
    out << "Sea Name: " << sea.name << endl;
    out << "Location: " << sea.location << endl;
    out << "Size: " << sea.size << endl;
    out << "Depth: " << sea.depth << endl;
    out << "Surface Area: " << sea.surfaceArea << endl;
    out << "Saltiness: " << sea.saltiness << endl;
    return out;
}

// Method to display information about the sea
void Sea::displaySeaInfo() {
    cout << *this << endl;
}

// Method to get the saltiness of the sea
double Sea::getSaltiness() {
    return saltiness;
}

// Method to set the saltiness of the sea
void Sea::setSaltiness(double saltiness) {
    this->saltiness = saltiness;
}
