#include<iostream>
#include<cstring>
using namespace std;
class Cube
{
private:
    int side;
public:
    ~Cube()
    {
        cout<<"Destructor Called.";
    }
};
int main()
{
    Cube c;
}
