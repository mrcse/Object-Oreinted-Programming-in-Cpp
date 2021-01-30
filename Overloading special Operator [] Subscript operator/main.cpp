#include <iostream>

using namespace std;
class Marks
{
private:
    int subMark[3];
public:
    Marks(int a, int b , int c)
    {
        subMark[0]=a;
        subMark[1]=b;
        subMark[2]=c;
    }
    int operator[](int pos)
    {
        return subMark[pos];
    }
};
int main()
{
    Marks m(24,25,23);
    cout<<m[0]<<endl<<m[1]<<endl<<m[2]<<endl;
    return 0;
}
