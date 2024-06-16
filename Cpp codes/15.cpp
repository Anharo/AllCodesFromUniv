#include<iostream>
using namespace std;
class Counter
{
    private:
    int count;
    public:
    Counter()
    {
        count=0;

    }
    int getcount()
    {
        return count;
    }
    void operator ++()
    {
        ++count;
    }

};
int main()
{
    Counter c1,c2;
    cout<<"\n c1= "<<c1.getcount();
    cout<<"\n c2= "<<c2.getcount();
    ++c1;
    ++c2;
    ++c2;
    cout<<"\n c1= "<<c1.getcount();
    cout<<"\n c2= "<<c2.getcount();
    return 0;
}