#include "iostream"
#include "RationalFraction.h"

int main() {
    int n;
    std::cout << "Enter the number of RationalFractions: ";
    std::cin >> n;

    auto *fractions = new RationalFraction[n];


    for (int i = 0; i < n; i++) {
        int a, b;
        std::cout << "Enter numerator and denominator for fraction " << i + 1 << ": ";
        std::cin >> a >> b;
        try {
            fractions[i].set_rational_fraction(a, b);
        }
        catch (const std::invalid_argument &e) {
            std::cerr << "Error: " << e.what() << std::endl;
            i--;
        }
    }


    std::cout << "All fractions:" << std::endl;
    for (int i = 0; i < n; i++) {
        fractions[i].show();
    }


    std::cout << "Example operations:" << std::endl;
    RationalFraction f1(1, 2);
    RationalFraction f2(2, 3);
    RationalFraction f3 = f1 + f2;
    std::cout << "f1 + f2 = ";
    f3.reduce();
    f3.show();
    RationalFraction f4 = f2 - f1;
    std::cout << "f2 - f1 = ";
    f4.reduce();
    f4.show();
    ++f1;
    std::cout << "++f1 = ";
    f1.reduce();
    f1.show();
    bool equal = f1 == f2;
    std::cout << "f1 == f2 is " << std::boolalpha << equal << std::endl;
    bool greater = f2 > f1;
    std::cout << "f2 > f1 is " << std::boolalpha << greater << std::endl;
    f1 = f2;
    std::cout << "f1 = f2, f1 = ";
    f1.reduce();
    f1.show();


    delete[] fractions;

    return 0;
}