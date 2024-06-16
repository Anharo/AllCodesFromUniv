#include<iostream>
using namespace std;
int main()
{
    int a=1,b=1,n=1,c=0;
    cout<<a<<endl;
    cout<<b<<endl;
    while(n!=20)
    {
      c=a+b;
      a=b;
      b=c;
      cout<<c<<endl;
      n++;
    }
    return 0;

}