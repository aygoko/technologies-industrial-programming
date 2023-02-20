#include "iostream"
#include "Figure.h"

using namespace std;

int main() {
    float x1, x2, x3, x4, y1, y2, y3, y4;

    cout << "Enter the x and y coordinates of the first point: ";
    cin >> x1 >> y1;
    cout << "Enter the x and y coordinates of the second point: ";
    cin >> x2 >> y2;
    cout << "Enter the x and y coordinates of the third point: ";
    cin >> x3 >> y3;
    cout << "Enter the x and y coordinates of the fourth point: ";
    cin >> x4 >> y4;

    Figure f1(x1, x2, x3, x4, y1, y2, y3, y4);
    f1.show();

    if (f1.is_square()) {
        cout << "This is a square." << endl;
    }
    else if (f1.is_rhombus()) {
        cout << "This is a rhombus." << endl;
    }
    else if (f1.is_rectangle()) {
        cout << "This is a rectangle." << endl;
    }
    else {
        cout << "This is a quadrilateral." << endl;
    }

    if (f1.is_in_circle()) {
        cout << "A circle can be inscribed in this quadrilateral." << endl;
    }
    else {
        cout << "A circle cannot be inscribed in this quadrilateral." << endl;
    }

    if (f1.is_out_circle()) {
        cout << "This quadrilateral can be inscribed in a circle." << endl;
    }
    else {
        cout << "This quadrilateral cannot be inscribed in a circle." << endl;
    }

    cout << endl;

    Figure f2(x1, x2, x3, x4, y1, y2, y3, y4);
    f2.show();

    if (f2.is_square()) {
        cout << "This is a square." << endl;
    }
    else if (f2.is_rhombus()) {
        cout << "This is a rhombus." << endl;
    }
    else if (f2.is_rectangle()) {
        cout << "This is a rectangle." << endl;
    }
    else {
        cout << "This is a quadrilateral." << endl;
    }

    if (f2.is_in_circle()) {
        cout << "A circle can be inscribed in this quadrilateral." << endl;
    }
    else {
        cout << "A circle cannot be inscribed in this quadrilateral." << endl;
    }

    if (f2.is_out_circle()) {
        cout << "This quadrilateral can be inscribed in a circle." << endl;
    }
    else {
        cout << "This quadrilateral cannot be inscribed in a circle." << endl;
    }

    cout << endl;

    Figure f3(x1, x2, x3, x4, y1, y2, y3, y4);
    f3.show();

    if (f3.is_square()) {
        cout << "This is a square." << endl;
    }
    else if (f3.is_rhombus()) {
        cout << "This is a rhombus." << endl;
    }
    else if (f3.is_rectangle()) {
        cout << "This is a rectangle." << endl;
    }
    else {
        cout << "This is a quadrilateral." << endl;
    }

    if (f3.is_in_circle()) {
        cout << "A circle can be inscribed in this quadrilateral." << endl;
    }
    else {
        cout << "A circle cannot be inscribed in this quadrilateral." << endl;
    }

    if (f3.is_out_circle()) {
        cout << "This quadrilateral can be inscribed in a circle." << endl;
    }
    else {
        cout << "This quadrilateral cannot be inscribed in a circle." << endl;
    }

    cout << endl;

    return 0;
}