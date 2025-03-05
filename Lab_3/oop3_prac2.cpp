/*Write a C++ Program to calculate the area of different geometric shapes
such as Circle, Triangle, and Rectangle. Use function overloading.
Class Name: Shape
#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    void area(double radius) {
        cout << "Area of Circle: " << M_PI * radius * radius << endl;
    }

    void area(double base, double height) {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }

    void area(double length, double width) {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    Shape shape;

    shape.area(5.0);  // Circle
    shape.area(3.0, 4.0);  // Triangle
    shape.area(2.0, 6.0);  // Rectangle

    return 0;
}*/
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    // Function to calculate the area of a circle
    double area(double radius) {
        return M_PI * radius * radius;
    }

    // Function to calculate the area of a rectangle
    double area(double length, double width) {
        return length * width;
    }

    // Function to calculate the area of a triangle
    double area(double base, double height, bool isTriangle) {
        return 0.5 * base * height;
    }
};

int main() {
    Shape shape;

    // Circle
    double radius = 3.0;
    cout << "Area of Circle with radius " << radius << " is " << shape.area(radius) << endl;

    // Rectangle
    double length = 20.0, width = 15.0;
    cout << "Area of Rectangle with length " << length << " and width " << width << " is " << shape.area(length, width) << endl;

    // Triangle
    double base = 7.0, height = 3.0;
    cout << "Area of Triangle with base " << base << " and height " << height << " is " << shape.area(base, height, true) << endl;

    return 0;
}

