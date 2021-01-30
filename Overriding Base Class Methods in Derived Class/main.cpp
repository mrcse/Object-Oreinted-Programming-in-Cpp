#include <iostream>
#include <string>
using namespace std;

class Base
{
protected:
    string name="OOPs";
public:
    void display ()
    {
        cout<<"Hi i'm the Base class & my name is : "<<name<<endl;
    }
};

class Derived : public Base
{
public:
    void display ()
    {
        cout<<"Hi i'm the Derived class & my name is : "<<name<<endl;
    }
};
int main()
{
    Derived *jamshid;
    jamshid = new Derived();
    jamshid->display();     //it will overridden the base method

    /// to access the base method we will to use the scope resolution operator and class name

    jamshid->Base::display();
    return 0;
}

