#include<iostream>
using namespace std;
class  Trap
{
private:
    int b1, b2, hgt;

public:
    Trap()
    {
        b1=6;
        b2=6;
        hgt=4;
    }
    double areaprint()
    {
     return 0.5*(b1+b2)*hgt;
    }

    Trap(double base1, double base2, double height)
    {
        b1=base1;
        b2=base1;
        hgt=height;
    }

    Trap(double base, double height)
    {
        b1=base;
        b2=base;
        hgt=height;
    }


};
int main()
{
      Trap trap1;
      cout<<trap1.areaprint()<<endl;
      Trap trap2(5, 5, 3);
      cout<<"Area of Trapezium: "<<trap2.areaprint()<<endl;
      Trap trap3(11, 10, 7);
      cout<<"Area of Trapezium: "<<trap3.areaprint()<<endl;
      return 0;
}
