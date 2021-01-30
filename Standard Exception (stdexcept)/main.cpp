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
            throw runtime_error ("Divide By Zero occur");
    c=a/b;
    cout<<c<<endl;
    }
    catch(runtime_error &error){
    cout<<"Error 404!\n"<<error.what()<<endl;
    }
    return 0;
}
