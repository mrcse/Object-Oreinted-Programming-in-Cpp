#include <iostream>
#include <string>
using namespace std;
class human
{
protected:
    string name;
public:
    string d ()
    {
        return "My name is ";
    }
    void setname (string x)
    {
        name=x;
    }

};
class Pro : public human
{
public:
    int age;
    void setage(int x)
    {
        age=x;
    }
    void display ()
    {
        cout<<d()<<name<<endl<<age;
    }
};
int main()
{
    Pro X;
    X.setname("jamshid");
    X.setage(89);
    X.display();
    return 0;
}
