#include<iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double height;
public:
    Rectangle(double len, double hgt){
    length = len;
    height = hgt;
    }
    double calcArea(){
     return length*height;
     }
};

int main()
{
    Rectangle rect1(10.5, 8.6);
    cout<<"Area of Rectangle 1: "<<rect1.calcArea()<<endl;
    Rectangle rect2(8.5, 6.3);
    cout<<"Area of Rectangle 2: "<<rect2.calcArea()<<endl;
    return 0;

}
