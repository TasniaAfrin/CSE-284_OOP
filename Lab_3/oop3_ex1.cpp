#include<iostream>
using namespace std;
void print(int var){
    cout<<"Integer Number: "<<var<<endl;

}
void print(float var){
    cout<<"Float Number:" <<var<<endl;
}
void print(int var1, float var2){
        cout<<"Integer Number: "<<var1<<endl;
        cout<<"Float Number: " <<var2<<endl;
}

/*void print(int var1, int var2){
        cout<<"Integer Number: "<<var1<<endl;
        cout<<"Float Number: " <<var2<<endl;
}

void print(float var1, float var2){
        cout<<"Integer Number: "<<var1<<endl;
        cout<<"Float Number: " <<var2<<endl;*/
}
int main()
{
    int a= 4;
    float b= 3.5;
    print(a);
    print(b);
    print(a,b);
    return 0;
}
