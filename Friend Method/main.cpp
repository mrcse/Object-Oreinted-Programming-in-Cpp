/** NOTE
 * in Friend function we can't access the member of the class
 * Because in this method we can't inherit the properties
 * We can only define it outside the class or to link with class
 */

#include <iostream>
#include <string>
using namespace std;
class human
{
private:
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
    friend void display();

};
void display(human x)
{
    cout<<x.d()<<x.name<<endl;
}
int main()
{
    human Jamshid;
    string x;
    cin>>x;
    Jamshid.setname(x);
    display(Jamshid);
    return 0;
}
