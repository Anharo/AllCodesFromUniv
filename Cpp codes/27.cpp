#include<iostream>
#include<cstring>
using namespace std;
class shape
{ 
  public:
  void draw()
  {
    cout<<"Draw shape"<<endl;
  }  
};
class Color : public shape 
{
  public:
  string color;
  void setcolor(string c)
  {
    color=c;
  }
};
class square : public shape, public color
{
   int length;
   void setlength(int l)
   {
    length=l;
    cout<<"Draw a"<<color<<"Square side with length"<<length<<endl;
   }
};

int main()
{
  square sq;
  sq.setcolor("Red");
  sq.setlength(5);
  sq.draw();
  return 0;
}