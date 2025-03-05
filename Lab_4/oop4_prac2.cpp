/*Write a C++ program to calculate the percentage of a student. Accept the marks of five subjects (Physics, Chemistry, Math, Biology, and English) in base
class. A class will derived from the base class which includes a function to find the total marks obtained and another class derived from this first derived class
which calculates and displays the percentage of student.
Hints: Use array for taking the marks of a student.*/

#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    int marks[5];  // Array to store marks of 5 subjects

public:
    void getMarks() {
        cout << "Enter marks for five subjects (Physics, Chemistry, Math, Biology, English): ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }
};

// Derived class to calculate total marks
class TotalMarks : public Student {
protected:
    int total;

public:
    void calcTotal() {
        total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
    }

    int getTotal() {
        return total;
    }
};

// Second derived class to calculate and display percentage
class Percentage : public TotalMarks {
public:
    void calcPercentage() {
        calcTotal();  // Calculate total marks first
        float percentage = (total / 5.0);  // Assuming each subject is out of 100
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Percentage student;
    student.getMarks();           // Accept marks
    student.calcPercentage(); // Calculate and display percentage

    return 0;
}
