/** NOTE
 * we can't use the friend methods for operator overloading
 * We can use the scope resolution operator to define the operator methods
 */
#include <iostream>
#include <string>
using namespace std;

class Students
{
public:
    int midmarks;
    int finalmarks;
    Students()
    {
        midmarks=0;
        finalmarks=0;
    }
    Students(int x,int y)
    {
        midmarks=x;
        finalmarks=y;
    }
    void display(Students x)
    {
        cout<<x.midmarks<<endl<<x.finalmarks<<endl;
    }
    Students operator+ (Students x)                       /// The same function will used for Minus Also
    {                                                     /// By just changing the ' + ' by ' - '
        Students temp;
        temp.midmarks=midmarks + x.midmarks;
        temp.finalmarks=finalmarks+x.finalmarks;
        return temp;
    }
    Students operator- (Students x);
};
Students Students:: operator- (Students x)
{
    Students temp;
    temp.midmarks=midmarks - x.midmarks;
    temp.finalmarks=finalmarks-x.finalmarks;
    return temp;
}
int main()
{
    Students S_1(10,20),S_2(30,40),S_3;
    S_3=S_1 + S_2;                ///in this case the plus operator is overloaded for the Class
    S_3.display(S_3);
    S_3=S_2-S_1;
    S_3.display(S_3);
    return 0;
}
