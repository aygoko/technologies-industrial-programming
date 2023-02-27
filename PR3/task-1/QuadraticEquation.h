#ifndef TECHNOLOGIES_INDUSTRIAL_PROGRAMMING_QUADRATICEQUATION_H
#define TECHNOLOGIES_INDUSTRIAL_PROGRAMMING_QUADRATICEQUATION_H


class QuadraticEquation {
private:
    double a, b, c;
    double discriminant;
public:
    QuadraticEquation(double a1, double b1, double c1);

    void set_quadratic_equation(double a1, double b1, double c1);

    double find_largest_root();

    double evaluate_polynomial_at(double x);

    QuadraticEquation operator+(const QuadraticEquation &other) const;
};


#endif //TECHNOLOGIES_INDUSTRIAL_PROGRAMMING_QUADRATICEQUATION_H