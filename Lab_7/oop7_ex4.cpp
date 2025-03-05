#include<iostream>
using namespace std;
class PrePost
{
    int a;
    public:
    // constructor to initialize a
PrePost()
{
    a = 0;
}
void show()
{
    cout<<a<<endl;
}
// friend functions
    friend PrePost operator++(PrePost x);
    friend PrePost operator++(PrePost x, int);
};
