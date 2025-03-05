#include<iostream>
using namespace std;
class Student{
private:
    int a,b;
    static  int stuCount;
public:
    Student()
    {
        stuCount++;
    }
    void print(int p, int q){
        a=p;
        cout<<"a= "<<a<<endl;
        b=q;
        cout<<"b= "<<b<<endl;
    }
    static int getCount(){
 return stuCount;
 }
};
int Student::stuCount=10;

int main(){
    Student s1;
    cout<<"Number 1"<<endl;
    s1.print(1,2);
    cout<<"Total student: "<<Student::getCount()<<endl;
    //s1.print(11,12);
    Student s2;
    cout<<"Number 2"<<endl;
    s2.print(3,4);
    cout<<"Total student: "<<Student::getCount()<<endl;
    Student s3;
    cout<<"Number 3"<<endl;
    s1.print(5,6);
    cout<<"Total student: "<<Student::getCount()<<endl;
    //s2.print(13,14);
    return 0;
}
