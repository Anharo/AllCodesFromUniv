#include<iostream>
#include<cstring>
using namespace std;
class vehicle
{
    public:
    string brand;
    void start()
    {
        cout<<"Engine started "<<endl;
    }
};
class car: public vehicle
{
    public:
    int numdoors;
    void open()
    {
        cout<<"Doors are open"<<endl;
    }
};
class sportcar:public car
{
public:
    double maxspeed;
    void accelerate(){
        cout<<"Accelerating the car"<<endl;
    }
};

int main()
{
    sportcar sc;
    sc.brand="Ferrari";
    sc.numdoors=2;
    sc.maxspeed=300;
    sc.start();
    sc.open();
    sc.accelerate();
    return 0;
}