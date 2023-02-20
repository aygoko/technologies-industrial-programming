#include "iostream"
#include "Triangle.h"
using namespace std;

int main() {
    double s1, s2, s3;

    Triangle triangles[3] = { Triangle(0, 0, 0), Triangle(0, 0, 0), Triangle(0, 0, 0) };

    for (int i = 0; i < 3; i++) {
        cout << "Enter the sides of triangle " << i + 1 << ": ";
        cin >> s1 >> s2 >> s3;

        Triangle t(s1, s2, s3);

        if (t.is_valid()) {
            triangles[i] = t;
        }
        else {
            cout << "The sides entered do not form a valid triangle. Please try again." << endl;
            i--;
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "Triangle " << i + 1 << ":" << endl;
        cout << "Perimeter: " << triangles[i].perimeter() << endl;
        cout << "Area: " << triangles[i].area() << endl;
    }

    return 0;
}
