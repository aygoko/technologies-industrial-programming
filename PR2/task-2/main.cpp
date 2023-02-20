#include "iostream"
#include "Circle.h"

using namespace std;

int main() {
    float r, x, y;

    cout << "Enter the radius, x-coordinate, and y-coordinate of circle 1: ";
    cin >> r >> x >> y;
    Circle circle1(r, x, y);

    cout << "Enter the radius, x-coordinate, and y-coordinate of circle 2: ";
    cin >> r >> x >> y;
    Circle circle2(r, x, y);

    cout << "Enter the radius, x-coordinate, and y-coordinate of circle 3: ";
    cin >> r >> x >> y;
    Circle circle3(r, x, y);

    cout << "Circle 1:" << endl;
    cout << "Radius: " << circle1.radius << endl;
    cout << "X-Coordinate: " << circle1.x_center << endl;
    cout << "Y-Coordinate: " << circle1.y_center << endl;
    cout << "Area: " << circle1.area() << endl;
    cout << "Triangle around circle: " << circle1.triangle_around(3, 4, 5) << endl;
    cout << "Triangle inside circle: " << circle1.triangle_in(3, 4, 5) << endl;
    cout << "Check circle: " << circle1.check_circle(5, 10, 15) << endl;

    cout << "Circle 2:" << endl;
    cout << "Radius: " << circle2.radius << endl;
    cout << "X-Coordinate: " << circle2.x_center << endl;
    cout << "Y-Coordinate: " << circle2.y_center << endl;
    cout << "Area: " << circle2.area() << endl;
    cout << "Triangle around circle: " << circle2.triangle_around(3, 4, 5) << endl;
    cout << "Triangle inside circle: " << circle2.triangle_in(3, 4, 5) << endl;
    cout << "Check circle: " << circle2.check_circle(3, 4, 5) << endl;

    cout << "Circle 3:" << endl;
    cout << "Radius: " << circle3.radius << endl;
    cout << "X-Coordinate: " << circle3.x_center << endl;
    cout << "Y-Coordinate: " << circle3.y_center << endl;
    cout << "Area: " << circle3.area() << endl;
    cout << "Triangle around circle: " << circle3.triangle_around(3, 4, 5) << endl;
    cout << "Triangle inside circle: " << circle3.triangle_in(3, 4, 5) << endl;
    cout << "Check circle: " << circle3.check_circle(2, 3, 4) << endl;

    return 0;
}