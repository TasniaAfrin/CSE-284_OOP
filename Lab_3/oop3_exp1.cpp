#include<iostream>
using namespace std;
class Square{
private:
    int side;
public:
    static int objectCount;
    Square(){

    objectCount++;
    }
};


int Square::objectCount=10;
int main(){
    Square a1;
    cout<<"Total Objects: "<<Square::objectCount<<endl;
    Square a2;
    cout<<"Total Objects: "<<Square::objectCount<<endl;
}
