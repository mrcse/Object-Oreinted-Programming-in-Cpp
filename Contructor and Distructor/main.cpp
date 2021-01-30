#include <iostream>
#include <string>
using namespace std;

class HumanBeing
{
private:
    string *name;
    int *age;
public:
    HumanBeing (string x,int y)
    {
        name = new string; //we allocate dynamic memory to store string
        age = new int;     ///////////////////////////////////////////
        cout<<"When both are as a parameter : \n";
        *name = x;
        *age = y;
    }
    void Display()
    {
        cout<<*name <<endl<<*age<<endl;
    }
    ~HumanBeing()
    {
        delete name;
        delete age;
        cout<<"I'm the Destructor";
    }
};
int main()
{
    HumanBeing *pointer;
    pointer = new HumanBeing("Janoo",89);
    pointer->Display();

    delete pointer; // to call the destructor
    return 0;
}
