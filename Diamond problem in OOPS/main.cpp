#include <iostream>
#include <string>

using namespace std;

class Animals
{
public:
    string color;
    void voice()
    {
        cout<<"Very Bad....!"<<endl;
    }
};
class Lion : virtual public Animals              ///this is called virtual inheritance we used it to solve Diamond Problem
{

};
class Tiger : virtual public Animals
{

};
class NoName : public Lion, public Tiger
{

};
int main()
{
    NoName Pesho;
    Pesho.voice();              ///when we call the member of the animals class the compiler confused from which inherit i solved this
                                /// this is Called Diamond Problem
                                /** |30|error: request for member 'voice' is ambiguous|
                                    |10|note: candidates are: void Animals::voice()|
                                    |10|note:                 void Animals::voice()|
                                    ||=== Build failed: 1 error(s), 0 warning(s) (0 minute(s), 0 second(s)) ===|
                                 **/

    return 0;
}
