#include <iostream>
#include <string>
using namespace std;

class HumanBeing
{
private:
    string name;
    int age;

public:
    HumanBeing()
    {
        cout<<"Default Constructor :\n";
        name="noname";
        age=0;
    }
    HumanBeing(string x)
    {
        cout<<"Name  as a parameter Constructor : \n";
        name = x;
        age=10;
    }
    HumanBeing(int x)
    {
        cout<<"Age as parameter Constructor : \n";
        name = "Jamshid";
        age = x;
    }
    HumanBeing (string x,int y)
    {
        cout<<"When both are as a parameter : \n";
        name = x;
        age = y;
    }
    void Display()
    {
        cout<<name <<endl<<age<<endl;
    }
};

int main()
{
    HumanBeing jamshid;
    jamshid.Display();

    HumanBeing Maryam("Jano");
    Maryam.Display();

    HumanBeing Wicket(20);
    Wicket.Display();

    HumanBeing Ali("Janooo",19);
    Ali.Display();

    HumanBeing *pointer;
    pointer = new HumanBeing(89);
    pointer->Display();
    return 0;
}
