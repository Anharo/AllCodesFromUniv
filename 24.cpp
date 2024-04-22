#include<iostream>
using namespace std;
void swp(int *x, int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    
}
int main()
{
    /*double i =2;
    double *k=&i;
    cout<<k<<endl;
    cout<<*(k)<<endl;
    k++;
    cout<<k;
    
    int a[5]={1,2,3,4,5};
    for (int i=0;i<5;i++)
     cout<<*(a+i);
    */
   int a =10,b=20;
   swp(&a,&b);
   cout<<a<<b;
}
