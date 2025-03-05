/*Write a C++ program to define a class Batsman with the following specifi-
cations,
batsman ID: 6 digits roll number
static member count: To keep track on number of object
static function getcount(): return the value of count
function getname(): To take batsman name as input
function showname(): To show batsman name
Access all the data members and member functions using the objects of class
Batsman.
Sample Input/Output
Initially number of objects: 0
Enter number of entry: 2
Enter Batsman Name: Shakib
Enter Batsman Name: Liton
Finally number of objects: 2
Batsman Name: 1804001
Batsman Name: 1804002*/


#include <iostream>
#include <string>

using namespace std;

class Batsman {
public:
    int id;
    string name;
    static int count;

    Batsman() {
        id = 2108050 + count + 1;
        count++;
    }

    void getname() {
        cout << "Enter Batsman Name: ";
        getline(cin, name);
    }

    void showname() {
        cout << "Batsman Name: " << id << endl;
    }

    static int getcount() {
        return count;
    }
};

int Batsman::count = 0;

int main() {
    int n;

    cout << "Initially number of objects: " << Batsman::getcount() << endl;

    cout << "Enter number of entry: ";
    cin >> n;

    cin.ignore(); // Consume the newline character

    Batsman batsman[n];

    for (int i = 0; i < n; i++) {
        batsman[i].getname();
    }

    cout << "Finally number of objects: " << Batsman::getcount() << endl;

    for (int i = 0; i < n; i++) {
        batsman[i].showname();
    }

    return 0;
}
