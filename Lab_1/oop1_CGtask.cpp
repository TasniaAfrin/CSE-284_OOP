#include<iostream>
using namespace std;
class cgpa
{
private:
    double sub1;
    double sub2;
    double sub3;

    int crdt1;
    int crdt2;
    int crdt3;

public:
    /* void initData(){
        cout<<"Enter the marks and credit of subject 1: ";
        cin>> sub1>>cr1;
        cout<<"Enter the marks and credit of subject 2: ";
        cin>> sub2>>cr2;
        cout<<"Enter the marks and credit of subject 3: ";
        cin>> sub3>>cr3;
    }  */
    void initData(double sb1, double sb2,double sb3, double cr1,double cr2, double cr3)
    {
        sub1=sb1;
        sub2=sb1;
        sub3=sb3;
        crdt1=cr1;
        crdt2=cr2;
        crdt3= cr3;
    }

    double calculateCGPA()
    {
        return (sub1*crdt1 + sub2*crdt2 + sub3*crdt3)/(crdt1+ crdt2+ crdt3);
    }
};
int main()
{
    cgpa stu1;
    /*  stu1.initData();  */
    stu1.initData(3, 4, 3.5, 3, 3, 3);
    cout<<"Total CGPA: "<<stu1.calculateCGPA()<<endl;
    return 0;
}
