#include <iostream>
#include <string>
#include "Ocean.h"


Ocean::Ocean() {
    this->name = "";
    this->location = "";
    this->size = 0;
    this->depth = 0;
    this->surfaceArea = 0;
}


Ocean::Ocean(std::string name, std::string location, int size, int depth, int surfaceArea) {
    this->name = name;
    this->location = location;
    this->size = size;
    this->depth = depth;
    this->surfaceArea = surfaceArea;
}


std::string Ocean::getName() const {
    return this->name;
}


std::string Ocean::getLocation() const {
    return this->location;
}

int Ocean::getSize() const {
    return this->size;
}


int Ocean::getDepth() const {
    return this->depth;
}

int Ocean::getSurfaceArea() const {
    return this->surfaceArea;
}

std::istream& operator>>(std::istream& is, Ocean& ocean) {
    std::cout << "Enter the name of the ocean: ";
    std::getline(is, ocean.name);
    std::cout << "Enter the location of the ocean: ";
    std::getline(is, ocean.location);
    std::cout << "Enter the size of the ocean: ";
    is >> ocean.size;
    std::cout << "Enter the depth of the ocean: ";
    is >> ocean.depth;
    std::cout << "Enter the surface area of the ocean: ";
    is >> ocean.surfaceArea;
    is.ignore();
    return is;
}


std::ostream& operator<<(std::ostream& os, const Ocean& ocean) {
    os << "Name: " << ocean.name << std::endl;
    os << "Location: " << ocean.location << std::endl;
    os << "Size: " << ocean.size << std::endl;
    os << "Depth: " << ocean.depth << std::endl;
    os << "Surface Area: " << ocean.surfaceArea << std::endl;
    return os;
}
