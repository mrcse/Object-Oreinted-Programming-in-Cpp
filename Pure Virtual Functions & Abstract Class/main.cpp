/** Abstract Class
 * Those class which contain one or more than one pure virtual function
 **/

#include <iostream>
#include <string>
using namespace std;

 /// in this case the Base class is Abstract class
/// Because it have one pure virtual function

class Base
{
public:
    virtual void display()=0;            ///this the definition of pure virtual function
};
void Base :: display()
{
    cout<<"Hello i am virtual function's definition"<<endl;
}
class Derived : public Base
{
public:
    void display()
    {
      cout<<"hey i'm from Derived Class...!"<<endl;
      Base ::display();                            ///to call the pure virtual function
    }
};

int main()
{
    //Base Object;       ///we can't create object of abstract class
    Derived Object;
    Object.display();
    return 0;
}
