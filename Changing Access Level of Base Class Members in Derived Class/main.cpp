#include <iostream>
#include <string>
using namespace std;

class father
{
protected:
    int height;
public:
    void sethieght (int iheight)
    {
        height= iheight;
    }
};

class Kid : private father  // by default it is act as private we can specifies it private
{
public:
    ///Following we are going to change the access level of of som methods and variable these are act as public member because we are chenge these in public block
    //the setheight method is private i am going to change the access of this
    father :: sethieght;       //same thing is done for variables
    father :: height;          // this is also possible because we can change the access level of variable also
    void display()
    {
        cout<<"My Kid is "<<height<<endl;
    }
};
int main()
{
    Kid *jamshid;
    jamshid = new Kid( );
    jamshid->sethieght(89);
    jamshid->display();
    return 0;
}
