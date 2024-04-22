#include<iostream>
using namespace std;
void display(int var1,double var2)
{
    cout<<"Integer= "<<var1;
    cout<<"Double= "<<var2<<endl;
}
void display(int var)
{
    cout<<"Integer= "<<var<<endl;
}
void display(double var)
{
    cout<<"Double= "<<var<<endl;
}
int main()
{
    int a =5;
    double b=5.5;
    display(a);
     display(b);
      display(a,b);
      return 0;
}