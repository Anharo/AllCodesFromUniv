#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void show()=0;
};
class drv1 : public Base
{
   void show()
   {
    cout<<"Drv1"<<endl;
   }
};
class drv2 : public Base
{
    void show()
    {
        cout<<"Drv2"<<endl;
    }
};
int main()
{
    //Base b;
    
     Base *arr[2];
     drv1 dv1;
     drv2 dv2;
     arr[0]=&dv1;
     arr[1]=&dv2;
     arr[0]->show();
     arr[1]->show();
     
     return 0;
}