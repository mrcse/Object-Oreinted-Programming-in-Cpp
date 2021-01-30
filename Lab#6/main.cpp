#include <iostream>

using namespace std;

class A
{
protected:
    int a;
public:
    A():a(0){}

    A(int aa):a(aa){}

    void setA(int aa){a=aa;}

    int getA(){return a;}

    void showA(){cout<<"First value is :"<<a<<endl;}
};
class B:public A
{
protected:
    int b;
public:
    B():b(0),A(){}

    B(int bb):b(bb),A(bb){}

    B(int aa,int bb){a=aa,b=bb;}

    B(int bb,A aa){b=bb,a=aa.getA();}

    void setB(int bb){b=bb;}

    int getB(){return b;}

    void showB(){cout<<endl;showA();cout<<"Second value is : "<<b<<endl;}
};
class C:public B
{
protected:
    int c;
public:
    C():c(0),B(){}

    C(int cc):c(cc),B(cc){}

    C(int cc,int bb,int aa){a=aa,b=bb,c=cc;}

    C(int cc,B bb){c=cc,b=bb.getB();a=bb.getA();}

    void setC(int cc){c=cc;}

    int getC(){return c;}

    void showC(){cout<<endl;showA();showB();cout<<"Third value is : "<<c<<endl;}
};
int main()
{
    A aa(10);
    aa.showA();

    B bb(4,aa);
    bb.showB();

    C cc(20,10);
    cc.showC();

    return 0;
}

