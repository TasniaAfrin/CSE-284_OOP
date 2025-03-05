/*Write a C++ program to define a class BOX with member functions.*/
#include<iostream>
using namespace std;
class BOX
{
    public:
    double length, breadth, height;
    void input_value()
    {
        cout<<"Enter three sides: "<<endl;
        cin>>length>>breadth>>height;
    }
    void print_value()
    {
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Height: "<<height<<endl;
    }
    double volume()
    {
      double v = length*breadth*height;
      cout<<"Volume of the box: "<<v<<endl;
      //return v;
    }
};
int main(){
   BOX mybox;
   BOX mybox2;
   mybox.input_value();
   mybox.print_value();
   mybox.volume();
   //double vol = mybox.volume();
   //cout<<"Volume of the box: "<<vol<<endl;

   mybox2.input_value();
   mybox2.print_value();
   mybox2.volume();
   //double vol2 = mybox2.volume();
   //cout<<"Volume of the box: "<<vol2<<endl;
}
