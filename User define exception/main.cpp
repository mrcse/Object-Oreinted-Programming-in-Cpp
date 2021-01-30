#include <iostream>
#include <exception>
using namespace std;
class OverSpeed : public exception
{
private:
    int speed;
public:
    const char* what()
    {
        return "\nSTOP!\nYou are in Car\nNot in Aeroplane";
    }
    int getspeed()
    {
        return speed;
    }
    void serspeed(int x)
    {
        speed=x;
    }

};
class Car
{
    int speed;
public:
    Car():speed(0){};
    void accelarat()
    {
        while(1)
        {
            speed+=1;
            cout<<"Speeding: "<<speed<<endl;
            if(speed>=400)
            {
              OverSpeed s;
              s.serspeed(speed);
              throw s;
            }
        }
    }
};
int main()
{
    Car A;
    try{
        A.accelarat();
    }catch(OverSpeed s)
    {
        cout<<s.what()<<endl;
        cout<<"Your Speed is : "<<s.getspeed();
    }

    return 0;
}
