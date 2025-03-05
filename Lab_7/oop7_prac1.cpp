/* 1. Define a class Distance with distances in feet and inch and with a print
 function to print the distance.
 a) overload < operator to compare two distances using member function.
 b) overload + operator to add two Distances using friend function.*/


#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    Distance() {
        feet = 0;
        inch = 0;
    }

    Distance(int f, int i) {
        feet = f;
        inch = i;
    }

    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inch;

        if (inch >= 12) {
            feet += inch / 12;
            inch %= 12;
        }
    }

    Distance operator+(Distance& d2) {
        Distance temp;
        temp.feet = feet + d2.feet;
        temp.inch = inch + d2.inch;

        if (temp.inch >= 12) {
            temp.feet += temp.inch / 12;
            temp.inch %= 12;
        }

        return temp;
    }

    bool operator<(const Distance& d) const {
        int totalInches1 = feet * 12 + inch;
        int totalInches2 = d.feet * 12 + d.inch;
        return totalInches1 < totalInches2;
    }

    void print() const {
        cout << feet << " feet " << inch << " inches" << endl;
    }
};

int main() {
    Distance d1, d2;

    cout << "Enter first distance:" << endl;
    d1.input();

    cout << "Enter second distance:" << endl;
    d2.input();

    if (d1 < d2)
        cout << "First distance is less than second distance." << endl;
    else
        cout << "First distance is not less than second distance." << endl;

         Distance temp = d1 + d2;


    cout << "Resultant Distance: ";
    temp.print();

    return 0;
}
