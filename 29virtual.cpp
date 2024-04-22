#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void show()
    {
        cout<<"Base"<<endl;
    }
};
class dru1 : public Base
{
    public:
    void show()
    {
        cout<<"Dreu1"<<endl;
    }
};
class dru2 : public Base
{
    public:
    void show()
    {
        cout<<"Dreu2"<<endl;
    }
};
int main()
{
    dru1 dv1;
    dru2 dv2;
    Base *ptr;
    ptr=&dv1;
    ptr->show();
    ptr=&dv2;
    ptr->show();
    return 0;
}