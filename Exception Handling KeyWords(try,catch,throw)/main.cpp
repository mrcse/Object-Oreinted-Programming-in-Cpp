#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter Two numbers for division : \n";
    cin>>a>>b;
    int c;

    try{
        if(b==0)
            throw "Divide By Zero occur";
    c=a/b;
    cout<<c<<endl;
    }
    catch(const char *a){
    cout<<"Error 404!\n"<<a<<endl;
    }
    return 0;
}
