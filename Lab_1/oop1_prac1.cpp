/* Write a class having two private variables and one member function which
will return the area and perimeter of the rectangle. */

#include<iostream>
using namespace std;

class rectangale{
    private:
    double length, width;

    public:
    void input(){
        cout<<"Enter length and width of the rectangle: ";
        cin>>length>>width;
    }
    double area(){
        return length * width;
    }
    double perimeter(){
        return 2 * (length + width);
    }
};
int main(){
    rectangale myrect;

    myrect.input();
    cout<<"Area of the rectangle: "<<myrect.area()<<endl;
    cout<<"Perimeter of the rectangle: "<<myrect.perimeter()<<endl;
return 0;
}
