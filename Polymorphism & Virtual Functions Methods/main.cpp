#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    virtual void display()                    ///if virtual is not used here the method will be overridden
    {                                         /// because we use Base parameter in below function
      cout<<"hey i'm from Base Class...!"<<endl;
    }
};

class Ist_ed : public Base
{
public:
    void display()
    {
      cout<<"hey i'm from 1st Derived Class...!"<<endl;
    }
};

class IInd_ed : public Ist_ed
{
public:
    void display()
    {
      cout<<"hey i'm from 2nd Derived Class...!"<<endl;
    }
};

void who_m_i (Base &x)         // this "&" operator is must in this polymorphism
{
    x.display();               //the object which use here must be contain address what ever pointer or by reference
}
int main()
{
    Ist_ed First;
    IInd_ed Second;
    who_m_i(First);      //if the method is missing from the derived class then the base function will call by default from which its derived
    who_m_i(Second);    /// this nature of Virtual function called hierarchical nature
    return 0;
}
