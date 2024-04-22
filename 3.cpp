#include<iostream>
using namespace std;
int main()
{
    int a,rem=0,sum=0;
    cout<<"Enter the number to find the sum of digits:"<<endl;
    cin>>a;
    while(a!=0)
    {
        rem=a%10;
        sum=sum+ rem;
        a=a/10; 
    }
    cout<<"sum:"<<sum<<endl;
    return 0;
}