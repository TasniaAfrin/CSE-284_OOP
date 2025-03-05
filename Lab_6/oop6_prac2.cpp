#include <iostream>
using namespace std;

// Class declaration
class Range {
private:
    int start, end;

public:
    // Constructor to initialize range
    Range(int s, int e) : start(s), end(e) {}

    // Friend function declaration
    friend void findDivisibleBy11(const Range& r);
};

// Friend function definition
void findDivisibleBy11(const Range& r) {
    int sum = 0;
    cout << "Numbers between " << r.start << " and " << r.end << " divisible by 11 are: ";

    for (int i = r.start; i <= r.end; ++i) {
        if (i % 11 == 0) {
            cout << i << " ";
            sum += i;
        }
    }

    cout << "\nSum of these numbers: " << sum << endl;
}

int main() {
    // Define the range
    Range range(100, 200);

    // Call the friend function
    findDivisibleBy11(range);

    return 0;
}
