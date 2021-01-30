/** NOTE
 * we can use the friend methods for short hand operator overloading
 * We can't use the scope resolution operator to define the short hand operator overloading methods
 */

#include <iostream>

using namespace std;

class Marks
{
private:
    int marks;
public:
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
        cout<<"Your marks after Bonus is : "<<marks<<endl;
    }
    void operator+= (int x)                                  /// in this case the address pass by default
    {                                                        /// or the address pass implicitly
        marks += x;
    }
    friend Marks operator-= (Marks &x,int y);                /// in the case the address must be pass explicitly
};                                                          /// friend function is must for short hand operators
Marks operator-= (Marks &x , int y)
{                                                            /// we can return the value as in the operator overloaded
    x.marks-=y;
    return x;
}
int main()
{
    Marks m1,m2;
    m1.setmarks(100);
    m2.setmarks(50);
    m1-=40;
    m2+=10;
    m1.display();
    m2.display();
    return 0;
}
