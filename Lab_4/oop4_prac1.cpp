/*Write a C++ program to add two numbers. Accept these two numbers from the user in base class and display the sum of these two numbers in derived class.*/
#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int num1, num2;

public:
    void getNumbers() {
        cout << "Enter number1: ";
        cin >> num1;
        cout << "Enter number2: ";
        cin >> num2;
    }
};

// Derived class
class Derived : public Base {
public:
    void displaySum() {
        int sum = num1 + num2;
        cout << "The sum of the two numbers: " << sum << endl;
    }
};

int main() {
    Derived obj;
    obj.getNumbers();  // Call function from base class
    obj.displaySum();  // Call function from derived class

    return 0;
}
