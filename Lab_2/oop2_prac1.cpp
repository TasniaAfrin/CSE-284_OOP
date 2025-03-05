/*1. Suppose you have a Savings Account with an initial amount of 500 and you
have to add some more amount to it. Create a class ’AddMoney’ with a data
member named ’amount’ with an initial value of 500. Now make two constructors
of this class as follows:
• without any parameter - no amount will be added to the Savings Account.
• having a parameter which is the amount that will be added to the Savings
Account.
Create an object of the ’AddMoney’ class and display the final amount in the
Savings Account.*/
#include <iostream>
using namespace std;

class AddMoney {
private:
    int amount;

public:
    // Constructor without parameters
    AddMoney() {
        amount = 500;  // Initial value
    }

    // Constructor with a parameter
    AddMoney(int addedAmount) {
        amount = 500 + addedAmount;  // Add the additional amount to the initial amount
    }

    // To display the final amount
    void displayAmount() {
        cout << "Final amount in Savings Account: " << amount << endl;
    }
};

int main() {
    // Object with no additional amount
    AddMoney acc1;
    acc1.displayAmount();

    // Object with additional amount
    int addedAmount;
    cout << "Enter amount to add: ";
    cin >> addedAmount;
    AddMoney acc2(addedAmount);
    acc2.displayAmount();

    return 0;
}
