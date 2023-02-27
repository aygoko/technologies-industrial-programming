#include "QuadraticEquation.h"
#include "cmath"
#include "iostream"


QuadraticEquation::QuadraticEquation(double a1, double b1, double c1) {
    set_quadratic_equation(a1, b1, c1);
}

void QuadraticEquation::set_quadratic_equation(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
    discriminant = pow(b, 2) - 4 * a * c;
}

double QuadraticEquation::find_largest_root() {
    if (discriminant < 0) {
        std::cout << "No real roots." << std::endl;
        return 0;
    }
    double x1 = (-b + std::sqrt(discriminant)) / (2 * a);
    double x2 = (-b - std::sqrt(discriminant)) / (2 * a);
    return (x1 > x2) ? x1 : x2;
}

double QuadraticEquation::evaluate_polynomial_at(double x) {
    return a * pow(x, 2) + b * x + c;
}


QuadraticEquation QuadraticEquation::operator+(const QuadraticEquation &other) const {
    double a_sum = a + other.a;
    double b_sum = b + other.b;
    double c_sum = c + other.c;
    return QuadraticEquation(a_sum, b_sum, c_sum);
}