#include<iostream>
#include<math.h>
using namespace std;
class  Polygon
{
public:
     int a;
     int b;
     int c;


};
//*class protected
class Triangle: protected Polygon{
private:
     int hgt;
public:
    Triangle(int v1,int v2, int v3, int h)
    {
        b1=base1;
        b2=base1;
        hgt=height;
    }
    double areaprint()
    {
        return hgt*0.5*a;
    }
    double printperimeter()
    {
        return a+b+c;
    }

};
int main()
{
    Triangle t;
    t.areaprint();
    t.printPerimeter();


    return 0;
}
