#include <iostream>
using namespace std;
class inventory
{
    private:
    int id,qnt,price;
    string name;
    public:
    inventory()
    {
        id=0;
        qnt=0;
        price=0;
        name=" ";
    }
    void addtion()
    {
        cout<<"Enter id,quantity,price,and name"<<endl;
        cin>>id>>qnt>>price>>name;

    }
    void shoit()
    {
        cout<<id<<"\t"<<name<<"\t"<<price<<"\t"<<qnt<<"\t"<<endl; 

    }
};
int main()
{
    inventory a[5];
    for(int i=0;i<5;i++)
    {
        a[i].addtion();
        

    } 
    for(int i=0;i<5;i++)
    {
       a[i].shoit();
    }
}