#ifndef TECHNOLOGIES_INDUSTRIAL_PROGRAMMING_TRIANGLE_H
#define TECHNOLOGIES_INDUSTRIAL_PROGRAMMING_TRIANGLE_H


class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3);

    bool is_valid();

    double perimeter();

    double area();

};


#endif
