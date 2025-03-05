#include <iostream>
using namespace std;

// Class declaration
class Number {
private:
    int value;

public:
    // Constructor to initialize the number
    Number(int v) : value(v) {}

    // Friend function declaration
    friend int reverseNumber(const Number& num);
};

// Friend function definition
int reverseNumber(const Number& num) {
    int reversed = 0;
    int temp = num.value;

    while (temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    return reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Create an object of Number
    Number numberObj(num);

    // Call the friend function
    cout << "The reverse of the number is: " << reverseNumber(numberObj) << endl;

    return 0;
}
