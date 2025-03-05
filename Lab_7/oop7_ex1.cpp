#include<iostream>
using namespace std;
class Complex{
private:
    float real;
    float img;
public:
    Complex{
        real = 0;
        img = 0;

    }
    void input()
    cout<<"Enter real and imag parts respectively: ";
    cin>>real;
    cin>>img;
    return 0;

    Complex operator + (Complex c){
    Complex temp;
    temp.real = real+c.real;
    tem.img= img+c.img;
    return temp;
}
void output()
{
    if(img<0)
        cout<<"Output complex number: "<<real<<img<<"i";
    else
     cout<<"Output is complex number"<<real<< "+" <<img<<"i";
};

int main()
{
    Complex c1, c2, result;
    cout<<"Enter first complex no.:  "<<
    c1.input();
    cout<<"Enter second complex no. "<<
    c1.input();
    result = c1 + c2;
    result.output();
    return 0;
}

