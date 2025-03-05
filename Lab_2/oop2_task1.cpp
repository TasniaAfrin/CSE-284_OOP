#include<iostream>
using namespace std;
class  Student
{
private:
    int a, b,c;
public:
    Student()
    {
        a=10;
        b=20;
        c=30;
        cout<<"Student 1: "<<a<<" "<<b<<" "<<c<<endl;
    }

    Student(int a1, int b1, int c1)
    {
        a= a1;
        b= b1;
        c= c1;
        cout<<"Student 2: "<<a<<" "<<b<<" "<<c<<endl;

    }

};

int main()
{
    Student stu1;
    Student stu2(55, 66, 77);
    //cout<<"Student 2: "<<stu2.a1<<" "<<stu2.b1<<" "<<stu.c1<<endl;
//    cout<<"Student 2: "<<a<<" "<<b<<" "<<c<<endl;

}
