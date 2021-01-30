#include <iostream>
#include <string>
using namespace std;

class father
{
public:
    int height;
    void fatherstatement ()
    {
        cout<<"Hey! i'm your father ask what you want\n";
    }
};

class mother
{
public:
    string color;
    void motherstatement ()
    {
        cout<<"Hey! i'm your mother ask what you want\n";
    }
};

class Kid : public father , public mother
{
public:
    void setcolorandheight(string x,int y)
    {
        color=x;
        height=y;
    }
    void display()
    {
        cout<<"My Kid is "<<height<<" feet high and he is "<<color<<endl;
    }
};
int main()
{
    Kid *jamshid;
    jamshid = new Kid( );
    jamshid->setcolorandheight("Skiny",5);
    jamshid->display();
    jamshid->fatherstatement();
    jamshid->motherstatement();
    return 0;
}
