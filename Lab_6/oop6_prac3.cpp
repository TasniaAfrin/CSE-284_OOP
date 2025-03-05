#include <iostream>
#include <cmath>
using namespace std;

// Class declaration
class Number {
private:
    int value;

public:
    // Constructor to initialize the number
    Number(int v) : value(v) {}

    // Friend function declaration
    friend void checkSumOfTwoPrimes(Number num);

    // Utility function to check if a number is prime
    static bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) return false;
        }
        return true;
    }
};

// Friend function definition
void checkSumOfTwoPrimes(Number num) {
    int n = num.value;
    bool found = false;

    cout << " " << n << " can be expressed as the sum of two prime numbers:\n";

    for (int i = 2; i <= n / 2; ++i) {
        int complement = n - i;
        if (Number::isPrime(i) && Number::isPrime(complement)) {
            cout << n << " = " << i << " + " << complement << endl;
            found = true;
        }
    }

    if (!found) {
        cout << n << " cannot be expressed as the sum of two prime numbers.\n";
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Create an object of Number
    Number numberObj(num);

    // Call the friend function
    checkSumOfTwoPrimes(numberObj);

    return 0;
}
