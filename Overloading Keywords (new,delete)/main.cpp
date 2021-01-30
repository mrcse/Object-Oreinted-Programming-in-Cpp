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
    Student (string n, int a)
    {
        name=n;
        age=a;
    }
    void show()const
    {
        cout<<"My name is "<<name<<" and  i am "<<age<<" years old.\n";
    }
    void *operator new(size_t size)  //size_t is capabal to hold a large piece of memory that can be allocated
    {                                //and the size contain the number of bit that we wan to allocate
        void *pointer;
        cout<<"Overloaded new Keyword of size : "<<size<<endl;
        pointer = malloc(size);
        if(!pointer)
        {
            bad_alloc b;
            throw b;
        }
        return pointer;
    }
    void operator delete(void *pointer)
    {
        cout<<"Overloaded Delete Keyword\n";
        free(pointer);
    }

};
int main()
{
    Student *Jamshid;
    try{
    Jamshid = new Student("Jamshid",20);
    Jamshid->show();
    delete Jamshid;
    }
    catch(bad_alloc b)
    {
        cout<<b.what()<<endl;
    }
    return 0;
}
