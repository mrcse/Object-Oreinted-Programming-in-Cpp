#include <iostream>
#include <string>
using namespace std;

class Base
{
protected:
    int a;
public:
    Base (int x)
    {
        a=x;
    }
};
class derived : public Base
{
public :
    derived(int x) : Base(x){} // in mulpile inheritance we used comma mother

    void display()
    {
        cout<<"your input is "<<a;
    }
};
int main()
{
    derived *jamshid;
    jamshid = new derived(78);
    jamshid->display();
    return 0;
}
