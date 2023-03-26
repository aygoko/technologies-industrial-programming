#include "Bay.h"

Bay::Bay() : Sea(), name(""), oceanName("") {}

Bay::Bay(const std::string &name, const std::string &location, float size, float depth, float surfaceArea,
         const std::string &oceanName)
        : Sea(location, size, depth, surfaceArea), name(name), oceanName(oceanName) {}

Bay::~Bay() {}

void Bay::setName(const std::string &name) {
    this->name = name;
}

std::string Bay::getName() const {
    return name;
}

void Bay::setOceanName(const std::string &oceanName) {
    this->oceanName = oceanName;
}

std::string Bay::getOceanName() const {
    return oceanName;
}

std::ostream &operator<<(std::ostream &os, const Bay &bay) {
    os << "Bay name: " << bay.name << std::endl
       << "Located in: " << bay.location << std::endl
       << "Size: " << bay.size << " km^2" << std::endl
       << "Depth: " << bay.depth << " m" << std::endl
       << "Surface area: " << bay.surfaceArea << " km^2" << std::endl
       << "Belongs to ocean: " << bay.oceanName << std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, Bay &bay) {
    std::cout << "Enter bay name: ";
    std::getline(is, bay.name);

    std::cout << "Enter location: ";
    std::getline(is, bay.location);

    std::cout << "Enter size (in km^2): ";
    is >> bay.size;

    std::cout << "Enter depth (in m): ";
    is >> bay.depth;

    std::cout << "Enter surface area (in km^2): ";
    is >> bay.surfaceArea;

    std::cout << "Enter the ocean name: ";
    std::getline(is >> std::ws, bay.oceanName);

    return is;
}
