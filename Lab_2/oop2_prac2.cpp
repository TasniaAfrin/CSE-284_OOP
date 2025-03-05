/* Write a C++ Program to define a class Car with the following specifica-
tions:

Private members:
car name, model name, fuel type: string type
mileage: float type
price: double type
Public members:
displaydata(): Function to display the data members on the screen.

Use Constructor (both Default and prameterized) and destructor. When no pa-
rameter is passed the default constructor will be called with a message ”Default

constructor has been called”.*/
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    // Private data members
    string carName;
    string modelName;
    string fuelType;
    float mileage;
    double price;

public:
    // Default constructor
    Car() {
        carName = "Unknown";
        modelName = "Unknown";
        fuelType = "Unknown";
        mileage = 0.0;
        price = 0.0;
        cout << "Default constructor has been called." << endl;
    }

    // Parameterized constructor
    Car(string cName, string mName, string fType, float m, double p) {
        carName = cName;
        modelName = mName;
        fuelType = fType;
        mileage = m;
        price = p;
        cout << "Parameterized constructor has been called." << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destructor has been called for " << carName << endl;
    }

    // Function to display the data members
    void displayData() {
        cout << "Car Name: " << carName << endl;
        cout << "Model Name: " << modelName << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    // Creating an object using the default constructor
    Car car1;
    car1.displayData();

    cout << endl;

    // Creating an object using the parameterized constructor
    Car car2("Ford", "Maverick", "Petrol", 17.6, 27000.0);
    car2.displayData();

    return 0;
}
