#include <iostream>

using namespace std;
class Person
{
private:
    int age;
public:
    void setage(int age)
    {
        this->age = age;           /// 'this' keyword is used when the name of method and variable are same
    }                             /// in this case "this" is a pointer which point the variable
    void display()
    {
        cout<<age<<endl;
    }
};
int main()
{
    Person jamshid;
    jamshid.setage(20);
    jamshid.display();
    return 0;
}
