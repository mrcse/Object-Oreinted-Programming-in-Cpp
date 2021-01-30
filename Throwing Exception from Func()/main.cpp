#include <iostream>

using namespace std;
void test() throw(int , char , runtime_error) ///if leave the the throw empty it will generate an error
{
    throw 20;
    throw "char";
    throw runtime_error("Runtime_error");

}
int main()
{
    try{
    test();
    }
    catch(...)                     ///catch (int x)
    {
        cout<<"Error 404!\n";     ///<<x;
    }
    return 0;
}
