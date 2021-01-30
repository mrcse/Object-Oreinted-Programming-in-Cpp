#include <iostream>

using namespace std;

template <class myType> void display(myType x,int  y)  /// did not return
{
    cout<<x<<y<<endl;
}
template <class myType> myType get(myType x)    ///to return value
{
    return (x<0)? -(x):x;
}

int main()
{
    display(get(-8));
    display(get(50.22));
    display(2,23);
    //display("Jamshid");

    return 0;
}
