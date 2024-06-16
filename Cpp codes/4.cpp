#include<iostream>
using namespace std;
int main()
{
    int a,fact=1;
    cout<<"Enter a number to find factorial:"<<endl;
    cin>>a;
    for(int i=1;i <=a;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial:"<<endl<<fact<<endl;
    return 0;
}