#include <iostream>
#include <cstring>
using namespace std;
class Part 
{
  private:
    char partname[30];
    int partnumber;
    double cost;
  public:
    void setpart(char pname[],int pn,double c)
    {
        strcpy(partname,pname);
        partnumber=pn;
        cost=c;
    }
    void showpart()
    {
        cout<<"\nName:"<<partname;
        cout<<"\nNumber:"<<partnumber;
        cout<<"\nCost:"<<cost;

    }

};
int main()
{
    Part p1,p2;
    p1.setpart("Bolt",447,217.533);
    p2.setpart("Hammer",435,350.53);
    cout<<"\nFirst Part:"<<p1.showpart();
    cout<<"\nSecond Part"<<p2.showpart();
    return 0;
}
