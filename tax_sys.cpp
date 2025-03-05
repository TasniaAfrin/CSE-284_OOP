#include <iostream>
using namespace std;

class Employee {
private:
    double basicPay;
    int yearsOfExperience;
    double medicalAllowance;
    double houseAllowance;
    double bonus;
    double grossPay;
    double taxAmount;

public:
    // Constructor to initialize the employee details
    Employee(double basicPay, int yearsOfExperience, double medicalAllowance, double houseAllowance, double bonus)
        : basicPay(basicPay), yearsOfExperience(yearsOfExperience), medicalAllowance(medicalAllowance), houseAllowance(houseAllowance), bonus(bonus), grossPay(0), taxAmount(0) {}

    // Function to calculate the gross pay
    void calculateGrossPay() {
        grossPay = (basicPay + medicalAllowance + houseAllowance) * 12 + bonus;
    }

    // Function to calculate the tax amount
    void calculateTax() {
        if (grossPay > 500000) {
            taxAmount = grossPay * 0.01; // 1% tax for gross pay above 500000
        } else {
            taxAmount = 0; // No tax for gross pay 500000 or below
        }
    }

    // Function to display the employee details
    void displayDetails() {
        cout << "Basic pay: " << basicPay << endl;
        cout << "Year of experience: " << yearsOfExperience << endl;
        cout << "Medical allowance for month: " << medicalAllowance << endl;
        cout << "House allowance per month: " << houseAllowance << endl;
        cout << "Bonus per year: " << bonus << endl;
        cout << "Gross pay: " << grossPay << endl;
        cout << "Tax amount: " << taxAmount << endl;
    }
};

int main() {
    // Sample Input 1
    cout << "Sample Input 1:\n";
    Employee emp1(22500, 0, 1200, 1400, 30000);
    emp1.calculateGrossPay();
    emp1.calculateTax();
    emp1.displayDetails();

    cout << "\n";

    // Sample Input 2
    cout << "Sample Input 2:\n";
    Employee emp2(24000, 1, 1200, 10000, 50000);
    emp2.calculateGrossPay();
    emp2.calculateTax();
    emp2.displayDetails();

    return 0;
}
