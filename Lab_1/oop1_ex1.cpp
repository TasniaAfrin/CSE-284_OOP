/*Write a C++ program to define a class BOX and create objects
of this class*/
#include<iostream>
using namespace std;
int main()
{
   class box{
       public:
      int len;
      int wid;
      int dep;
      double vol;
   };
   box box1;
   box box2;
   box1.len = 10;
   box1.dep = 10;
   box1.wid = 10;

   box2.len = 5;
   box2.dep = 5;
   box2.wid = 5;

   box1.vol = box1.len * box1.dep * box1.wid;
   cout<<box1.vol<<endl;
   box2.vol = box2.len * box2.dep * box2.wid;
   cout<<box2.vol;
}
