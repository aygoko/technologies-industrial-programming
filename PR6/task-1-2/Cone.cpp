#include "cone.h"
#include <cmath>


Cone::Cone() : x(0), y(0), z(0), r(1), h(1) {}

Cone::Cone(float x, float y, float z, float r, float h) :
        x(x), y(y), z(z), r(r), h(h) {}

void Cone::input() {
    std::cout << "Enter the center of the base (x y z): ";
    std::cin >> x >> y >> z;
    std::cout << "Enter the radius of the base: ";
    std::cin >> r;
    std::cout << "Enter the height: ";
    std::cin >> h;
}

void Cone::output() const {
    std::cout << "Cone with center (" << x << ", " << y << ", " << z
              << "), radius " << r << ", and height " << h << std::endl;
}

float Cone::surfaceArea() const {
    float slant_height = std::sqrt(r * r + h * h);
    return M_PI * r * slant_height + M_PI * r * r;
}

float Cone::volume() const {
    return M_PI * r * r * h / 3;
}
