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

class Derived : public Base
{
public:
    Derived()
    {
        cout<<"Constructor of the Derived class\n";
    }
    ~Derived ()
    {
        cout<<"Destructor of the Derived class\n";
    }
};
int main()
{
    /**if we use pointers then it will call only the constructor and after
     * delete the heap it will call the Destructor
     * In inherit classes first call the Base constructor then  the Derived
     * In inherit classes first call the derived destructor then the Base
     * In pointers case delete keyword must be used for calling the destructor
     */
    Derived *jamshid;
    jamshid = new Derived( );
    delete jamshid;

    ///to call the constructor without using pointers

    //Derived maryam;
    return 0;
}

