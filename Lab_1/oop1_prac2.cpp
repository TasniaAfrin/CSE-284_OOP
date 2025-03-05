/* Write a C++ Program to define a class batsman with the following specifications:

Private members:
    batsman code: 4 digits code number
    batsman name: 20 characters(string)
    total innings, notout innings, toal runs: integer type
    calcavg(): Function to compute batavg

    batting avg: [total runs/(total innings-notout innings)] (formula to calcu      late batting average)

Public members:

    readdata(): Function to accept value from batsman code, batsman name, total innings, notout innings,
    total runs and invoke the function calcavg().

    displaydata(): Function to display the data members on the screen.

Access all the data members and member functions to calculate batting aver-
age of a batsman by creating its object.
*/

#include <iostream>
#include<string>
using namespace std;
class batsman
{
private:
    int bcode;
    // char bname[20];
    string bname;
    int total_innings, notout_innings, total_runs;
    double batting_avg;

    void calcavg()
    {
        if (total_innings - notout_innings > 0)
        {
            batting_avg = total_runs / (total_innings - notout_innings);
        }
        else
        {
            batting_avg = 0.0;
        }
    }

public:
    void readdata()
    {
        cout << "Enter Batsman Code (4 digits): ";
        cin >> bcode;
       /* while (count_digit(bcode) != 4)
        {
            cout << "Invalid Input. Enter Batsman Code (4 digits): ";
            cin >> bcode;
        } */

        cout << "Enter Batsman Name: ";
        cin >> bname;

        cout << "Enter Total Innings: ";
        cin >> total_innings;

        cout << "Enter Not Out Innings: ";
        cin >> notout_innings;

        cout << "Enter Total Runs: ";
        cin >> total_runs;

        // Calculate batting average
        calcavg();
    }

    void displayData()
    {
        cout << "\nBatsman Code: " << bcode << endl;
        cout << "Batsman Name: " << bname << endl;
        cout << "Total Innings: " << total_innings << endl;
        cout << "Not Out Innings: " << notout_innings << endl;
        cout << "Total Runs: " << total_runs << endl;
        cout << "Batting Average: " << batting_avg << endl;
    }
    /*int count_digit(int number)
    {
        if (number == 0)
            return 1;

        int digits = 0;
        while (number != 0)
        {
            number /= 10;
            digits++;
        }
        return digits;
    }*/
};

int main()
{

    batsman b1;

    b1.readdata();

    b1.displayData();

    return 0;
}
