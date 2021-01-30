/** NOTE
 * in friend class we can inherit the properties or we can access the members
 * in friend method we can't inherit the properties or we can;t access the members
 */
#include <iostream>
#include <string>
using namespace std;
class human
{
private:
    string name;
public:
    string setname()
    {
        cin>>name;
        return name;
    }
    friend class Friend;

};
class Friend
{
public:
    void display()
    {
        cout<<"My name is "<<name<<endl;
    }
};


int main()
{
    human jamshid;
    jamshid.setname();
    Friend X;
    X.display();
    return 0;
}
