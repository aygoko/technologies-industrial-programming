#ifndef TECHNOLOGIES_INDUSTRIAL_PROGRAMMING_RATIONALFRACTION_H
#define TECHNOLOGIES_INDUSTRIAL_PROGRAMMING_RATIONALFRACTION_H


class RationalFraction {
public:
    explicit RationalFraction(int a1 = 0, int b1 = 1);

    void set_rational_fraction(int a1, int b1);

    void show() const;

    RationalFraction operator+(const RationalFraction &other) const;

    friend RationalFraction operator-(const RationalFraction &f1, const RationalFraction &f2);

    void operator++();

    bool operator==(const RationalFraction &other) const;

    bool operator>(const RationalFraction &other) const;

    RationalFraction &operator=(const RationalFraction &other);

    void reduce();

private:
    int numerator;
    int denominator;
};


#endif //TECHNOLOGIES_INDUSTRIAL_PROGRAMMING_RATIONALFRACTION_H