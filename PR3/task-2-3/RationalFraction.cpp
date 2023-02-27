#include "RationalFraction.h"
#include "iostream"
#include "stdexcept"

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

RationalFraction::RationalFraction(int a1, int b1) {
    if (b1 == 0) {
        throw invalid_argument("denominator cannot be zero");
    }
    numerator = a1;
    denominator = b1;
    reduce();
}

void RationalFraction::set_rational_fraction(int a1, int b1) {
    if (b1 == 0) {
        throw invalid_argument("denominator cannot be zero");
    }
    numerator = a1;
    denominator = b1;
    reduce();
}

void RationalFraction::show() const {
    cout << numerator << "/" << denominator << endl;
}

RationalFraction RationalFraction::operator+(const RationalFraction &other) const {
    int new_denominator = denominator * other.denominator;
    int new_numerator = numerator * other.denominator + other.numerator * denominator;
    return RationalFraction(new_numerator, new_denominator);
}

RationalFraction operator-(const RationalFraction &f1, const RationalFraction &f2) {
    int new_denominator = f1.denominator * f2.denominator;
    int new_numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    return RationalFraction(new_numerator, new_denominator);
}

void RationalFraction::operator++() {
    numerator += denominator;
    reduce();
}

bool RationalFraction::operator==(const RationalFraction &other) const {
    return numerator == other.numerator && denominator == other.denominator;
}

bool RationalFraction::operator>(const RationalFraction &other) const {
    int common_denominator = denominator * other.denominator;
    int numerator1 = numerator * other.denominator;
    int numerator2 = other.numerator * denominator;
    return numerator1 > numerator2;
}

RationalFraction &RationalFraction::operator=(const RationalFraction &other) {
    numerator = other.numerator;
    denominator = other.denominator;
    return *this;
}

void RationalFraction::reduce() {
    int gcd_ab = gcd(abs(numerator), abs(denominator));
    numerator /= gcd_ab;
    denominator /= gcd_ab;
}