#include "Circle.h"
#include "cmath"

Circle::Circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}

void Circle::set_circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}

float Circle::area() {
    return M_PI * pow(radius, 2);
}

bool Circle::triangle_around(float a, float b, float c) {
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        return true;
    } else {
        return false;
    }
}

bool Circle::triangle_in(float a, float b, float c) {
    float s = (a + b + c) / 2.0;
    float t = s * (s - a) * (s - b) * (s - c);
    float radius_in = sqrt(t) / s;

    if (radius_in <= radius) {
        return true;
    } else {
        return false;
    }
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
    if (radius == r && x_center == x_cntr && y_center == y_cntr) {
        return true;
    } else {
        return false;
    }
}
