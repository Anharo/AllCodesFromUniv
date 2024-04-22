#include<iostream>
using namespace std;
class Counter
{
   protected:
   int count;
   public:
   Counter()
   {
      count=0;
   }
   Counter(int c)
   {
      count=c;
   }
   int getcount()
   {
     return count;
   }
   Counter operator++()
   {
      return Counter(++count);
   }
};
class Countdown : public Counter
{
   public:
   Counter operator--()
   {
      return Counter(--count);
   }
};
int main()
{
   Countdown c1;
   cout<<"\n C1="<<c1.getcount();
   ++c1;++c1;++c1;
   cout<<"\n C1="<<c1.getcount();
   --c1;--c1;
   cout<<"\n C1="<<c1.getcount();
   return 0;
}