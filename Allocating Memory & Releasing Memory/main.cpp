#include <iostream>
#include <string>
using namespace std;

class HumanBeing
{
private:
    string *name;
    int *age;

public:
    HumanBeing(string iname , int iage)
    {
        //We are going to Allocating the memory dynamically
        name= new string ;
        age= new int ;
        *name = iname;
        *age = iage;
    }
    ~HumanBeing()
    {
        //here we are releasing the memory
        delete name;
        delete age;
        cout<<"All Memory are release...!"<<endl;
    }

    void Display()
    {
        cout<<"Hi i'm "<<*name <<" and i'm "<<*age<<endl;
    }
};

int main()
{
    HumanBeing *pointer= new HumanBeing("Jamshid",19);
    pointer->Display();
    delete pointer;
    return 0;
}
