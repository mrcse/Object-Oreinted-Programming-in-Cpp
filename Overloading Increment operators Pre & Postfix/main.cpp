/** NOTE
 * we can use the friend methods for short hand operator overloading
 * We can't use the scope resolution operator to define the short hand operator overloading methods
 */

#include <iostream>

using namespace std;

class Marks
{
public:
    int marks;
    Marks()
    {
        marks=0;
    }
    void setmarks(int marks)
    {
        this->marks=marks;
    }
    void display()
    {
        cout<<"After incrementation : "<<marks<<endl;
    }
    void operator++ ()                                       /// in this case the operator is prefix and for postfix we use temp object
    {                                                        ///  the address pass implicitly
        marks += 1;
        //return *this                 //for return methods
    }
    friend Marks operator-- (Marks &x,int);                /// in the case the address must be pass explicitly
};                                                          /// creating the temp object is must for postfix incrementation
Marks operator-- (Marks &x,int)
{
    Marks temp(x);                                                            /// we can return the value as in the operator overloaded
    x.marks-=1;
    return temp;
}
int main()
{
    Marks m1;
    m1.setmarks(100);
    m1.display();
    ++m1;
    m1.display();
    (m1--).display();
    m1.display();
    return 0;
}
