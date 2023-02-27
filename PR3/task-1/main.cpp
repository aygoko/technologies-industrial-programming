#include "iostream"
#include "QuadraticEquation.h"

int main() {
    double a, b, c, a1, b1, c1;
    std::cin >> a >> b >> c;
    std::cin >> a1 >> b1 >> c1;
    QuadraticEquation eq(a, b, c);
    QuadraticEquation eq2(a1, b1, c1);


    eq.find_largest_root();
    eq2.find_largest_root();
    std::cout << eq.evaluate_polynomial_at(6);
    std::cout << eq2.evaluate_polynomial_at(6);
    QuadraticEquation eq3 = eq + eq2;
    return 0;
}