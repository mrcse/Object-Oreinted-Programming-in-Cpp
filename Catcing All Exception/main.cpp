#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter Two numbers for division : \n";
    cin>>a>>b;
    int c;

    try{
        if(b==0)
            {
                //throw runtime_error ("Error 404!\n");
                //throw 0;
                throw "Error!";
            }
    c=a/b;
    cout<<c<<endl;
    }                                      /// in case other let say in int catch or in run_time catch the catch black handle that type of throws
    catch(...){                            ///it will handle all type of thrown which come from try block
    cout<<"Error 404!\n"<<endl;
    }
    return 0;
}
