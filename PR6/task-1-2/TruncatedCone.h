#include "Cone.h"
#include "cmath"

class TruncatedCone : public Cone {
private:
    double upperRadius;
public:

    TruncatedCone() : Cone(), upperRadius(0.0) {}

    TruncatedCone(double x, double y, double z, double radius, double height, double upperRadius)
            : Cone(x, y, z, radius, height), upperRadius(upperRadius) {}


    double getUpperRadius() const { return upperRadius; }

    void setUpperRadius(double r) { upperRadius = r; }

    double getX() const override { return x; }

    void setX(double x) override { this->x = x; }

    double getY() const override { return y; }

    void setY(double y) override { this->y = y; }

    double getZ() const override { return z; }

    void setZ(double z) override { this->z = z; }

    double getRadius() const override { return radius; }

    void setRadius(double r) override { this->radius = r; }

    double getHeight() const override { return height; }

    void setHeight(double h) override { this->height = h; }

    double surfaceArea() const override {
        double slantHeight = sqrt(pow(height, 2) + pow(radius - upperRadius, 2));
        double lateralArea = M_PI * slantHeight * (radius + upperRadius);
        return Cone::surfaceArea() + lateralArea;
    }

    double volume() const override {
        double height = this->height * (upperRadius * upperRadius + radius * radius + upperRadius * radius) /
                        (3 * upperRadius * upperRadius + 3 * radius * radius - 2 * upperRadius * radius);
        double r = this->radius * height / this->height;
        double upperR = upperRadius * height / this->height;
        return (1.0 / 3.0) * M_PI * (pow(upperR, 2) + upperR * r + pow(r, 2)) * height;
    }


    friend std::ostream &operator<<(std::ostream &os, const TruncatedCone &tc) {
        os << "Truncated Cone:" << std::endl
           << "  Center: (" << tc.getX() << ", " << tc.getY() << ", " << tc.getZ() << ")" << std::endl
           << "  Radius: " << tc.getRadius() << std::endl
           << "  Height: " << tc.getHeight() << std::endl
           << "  Upper Radius: " << tc.getUpperRadius() << std::endl
           << "  Surface Area: " << tc.surfaceArea() << std::endl
           << "  Volume: " << tc.volume() << std::endl;
        return os;
    }

    friend std::istream &operator>>(std::istream &is, TruncatedCone &tc) {
        double x, y, z, radius, height, upperRadius;
        std::cout << "Enter the center coordinates (x y z): ";
        is >> x >> y >> z;
        std::cout << "Enter the base radius: ";
        is >> radius;
        std::cout << "Enter the height: ";
        is >> height;
        std::cout << "Enter the upper base radius: ";
        is >> upperRadius;
        tc.setX(x);
        tc.setY(y);
        tc.setZ(z);
        tc.setRadius(radius);
        tc.setHeight(height);
        tc.setUpperRadius(upperRadius);
        return is;
    }


    bool operator==(const TruncatedCone &other) const {
        return Cone::operator==(other) && upperRadius == other.upperRadius;
    }

    bool operator!=(const TruncatedCone &other) const {
        return !(*this == other);
    }
};

#endif
