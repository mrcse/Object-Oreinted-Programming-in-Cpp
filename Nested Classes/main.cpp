#include <iostream>
#include <string>
using namespace std;

class Country
{
public:
    string name;
    string code;
    class City
    {
    public:
        string name;
        int street;
    };
    City x;
    void Display()
    {
        cout<<code<<"\t"<<name<<"\n"<<x.street<<"\t"<<x.name<<endl;
    }
};
int main()
{
    Country Pak;
    Pak.name="Pakistan";
    Pak.code="+92";
    Pak.x.name="Islamabad";    // double dots to access the inner class
    Pak.x.street=9;
    Pak.Display();
    return 0;
}
