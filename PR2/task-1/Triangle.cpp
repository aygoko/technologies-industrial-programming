#include "Triangle.h"
#include "cmath"

Triangle::Triangle(double s1, double s2, double s3) {
    side1 = s1;
    side2 = s2;
    side3 = s3;
}

bool Triangle::is_valid() {
    return ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2));
}

double Triangle::perimeter() {
    return side1 + side2 + side3;
}

double Triangle::area() {
    double p = (side1 + side2 + side3) / 2;
    return sqrt(p * (p - side1) * (p - side2) * (p - side3));
}