#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    Base ()
    {
        cout<<"Constructor of the Base class\n"<<endl;
    }
    ~Base ()
    {
        cout<<"Destructor of the Base class\n";
    }
};
int main()
{
    Base *jamshid;
    jamshid = new Base( );  //calling the constructor
    delete jamshid;         //calling the destructor
    return 0;
}
