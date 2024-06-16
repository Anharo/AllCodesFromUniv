#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    float inch;
    public:
    Distance()
    {
        feet=0;
        inch=0;
    }
    Distance(int ft,float in)
    {
        feet=ft;
        inch=in;

    }
    void getDistance()
    {
        cout<<"\nEnter feet: ";
        cin>>feet;
        cout<<"\nEnter inch: ";
        cin>>inch;
    }
    void show()
    {
        cout<<feet<<"\'-"<<inch<<"\'-"<<endl;

    }
    Distance operator + (Distance);
};
Distance Distance::operator+(Distance d2)
{
    int f= feet+d2.feet;
    float i=inch+d2.inch;
    if(i>=12)
    {
        i-=12;
        f++;

    }
    return Distance(f,i);

}
int main()
{
    Distance d1,d3,d4;
    Distance d2(11,6.25);
    d1.getDistance();
    d3.getDistance();
    d3=d1+d2;
    d4=d1+d2+d3;
    d1.show();
    d2.show();
    d3.show();
    d4.show();
    return 0;
}