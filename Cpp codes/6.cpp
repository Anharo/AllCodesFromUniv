#include<iostream>
using namespace std;
class Distance
{
private:
int feet,inch;
public:
Distance(int f,int i)
{
    feet=f;
    inch=i;
}
 void input()
 {
   cout<<"Enter feet and inches after pressing enter:"<<endl;
   cin>>feet>>inch;
 }
 void add(Distance f1,Distance f2)
 {
    feet=f1.feet+f2.feet;
    inches= i1.inch+i2.inch;
    if(inch>12)
    {
        feet++;
        inch=inch-12;
    }

 }
 void show()
 {
    cout<<feet<<"\'-'"<<"\''"<<endl;
 }
};
int main()
{
   Distance d1, d2, d3,d4(7,9);
   d1.input();
   d2.input();
   d3.add(d1,d2);
   d1.show();
   d2.show();
   d3.show();
   d5.add(d3,d5);
   d5.show();
    
   return 0; 
}

