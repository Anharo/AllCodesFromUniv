#include <iostream>
using namespace std;
class DISTANCE
{
    public:
    int inch;
    int feet;
    DISTANCE(int f, int i)
    {
        inch= i;
        feet= f;
    }
    DISTANCE()
    {
        inch=0;
        feet=0;
    }
    void show()
    {
        cout<<endl<<feet<<"\'-"<<inch<<"\''";}
    
    DISTANCE operator +(DISTANCE dog)
    {
        DISTANCE temp;
        temp.inch= inch + dog.inch;
        temp.feet= feet + dog.feet;
       
          if(temp.inch>12)
        {
            temp.feet++;
            temp.inch=temp.inch -12;
        }
        return DISTANCE(temp);
    }
    };
    class dis : public DISTANCE
    { 
       dis operator*(dis ap)
       {
         dis tem;
         tem.inch = inch*ap.inch;
         tem.feet = feet* ap.feet;
        if(tem.inch>12)
        {
            tem.inch=tem.inch/12;
            tem.
        }
       }
    }
   
    
    int main()
    {
        
    DISTANCE a1(5,10);
    DISTANCE dog(8,10);
    DISTANCE b2;
    b2= a1 + dog;
    b2.show();
    return 0;
    }


