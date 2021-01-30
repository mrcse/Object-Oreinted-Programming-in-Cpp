#include <iostream>

using namespace std;
class Mam
{
private:
    int value;
public:
    Mam()
    {
        value=11;
    }
    Mam(Mam const&source)                ///this must for copying constructor the source is receiving address of the right one
    {
        value=source.value+100;         ///  source.val means object_1+100
    }
    void display()
    {
        cout<<"\nthe value is :"<<value;
    }

};
int main()
{
    Mam object_1,object_2=object_1;       ///this is encapsulation it is actually a function but look like equation
    object_1.display();
    object_2.display();
    return 0;
}
