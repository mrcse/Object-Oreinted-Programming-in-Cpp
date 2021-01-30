#include <iostream>
#include <string>
#include <stdexcept>     ///using for bad_alloc function
using namespace std;
class Student
{
private:
    string name;
    int age;
public:
    Student ()
    {
        name="noname";
        age=0;
    }
    friend ostream &operator <<(ostream &output,Student &S);         ///these two are must friend function
    friend istream &operator >> (istream &input,Student &S);

};
ostream &operator <<(ostream &output,Student &S)                     /// the & operator is must because for permanent changes
    {
        output<<"WTF....!"<<endl;
        output<<"It is working \n";
        output<<"My name is "<<S.name<<" and i am "<<S.age<<" years old\n"<<endl;
        return output;
    }
    istream &operator >> (istream &input,Student &S)
    {
        input>>S.name>>S.age;
        return input;
    }
int main()
{
    Student Jamshid;
    cin>>Jamshid;
    cout<<Jamshid;
    return 0;
}
