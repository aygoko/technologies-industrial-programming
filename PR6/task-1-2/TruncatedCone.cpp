#include "TruncatedCone.h"
#include "TruncatedCone.h"
#include <iostream>
#include <cmath>

// Default constructor
TruncatedCone::TruncatedCone() : Cone() {
    topRadius = 0;
}

// Constructor with parameters
TruncatedCone::TruncatedCone(double cx, double cy, double cz, double radius, double height, double topRadius)
        : Cone(cx, cy, cz, radius, height), topRadius(topRadius) {}

// Calculate the surface area of the truncated cone
double TruncatedCone::surfaceArea() const {
    double l = sqrt(pow(topRadius - radius, 2) + pow(height, 2));
    return M_PI * (radius + topRadius) * l + Cone::surfaceArea();
}

// Calculate the volume of the truncated cone
double TruncatedCone::volume() const {
    double h = height * (topRadius * topRadius + topRadius * radius + radius * radius) / (3 * (topRadius * topRadius + topRadius * radius + radius * radius - topRadius * radius));
    double V = M_PI * h * (pow(topRadius, 2) + topRadius * radius + pow(radius, 2)) / 3.0;
    return V;
}

// Overloaded input operator
std::istream& operator>>(std::istream& in, TruncatedCone& c) {
    std::cout << "Enter the center coordinates (x,y,z): ";
    in >> c.x >> c.y >> c.z;
    std::cout << "Enter the radius of the base: ";
    in >> c.radius;
    std::cout << "Enter the height: ";
    in >> c.height;
    std::cout << "Enter the top radius: ";
    in >> c.topRadius;
    return in;
}

// Overloaded output operator
std::ostream& operator<<(std::ostream& out, const TruncatedCone& c) {
    out << "Truncated Cone: center(" << c.x << "," << c.y << "," << c.z << "), ";
    out << "radius = " << c.radius << ", height = " << c.height << ", top radius = " << c.topRadius << ", ";
    out << "surface area = " << c.surfaceArea() << ", volume = " << c.volume() << std::endl;
    return out;
}
