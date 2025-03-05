/*Write a C++ program to understand public and private access of
class data members.*/
#include<iostream>
using namespace std;
class Box{
  private:
  double length;
  double breadth;
  double height;

  public:
    void initData(double len, double brth, double hgt){
    length=len;
    breadth=brth;
    height=hgt;
    }

    double calculateArea()
    {
        return length*breadth;
    }
    double calculateVol()
    {
        return length*breadth*height;
    }

  };
int main()
{
  Box box1;
  box1.initData(42.5, 30.2, 10.2);
  cout<<"Area = "<<box1.calculateArea()<<endl;
  cout<<"Volume= "<<box1.calculateVol()<<endl;
  return 0;

}
