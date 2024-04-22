#include<iostream>
using namespace std;
class stack
{
    private:
     int st[100];
     int top;
    public:
     stack()
     {
        top=0;
     }
     void push(int var)
     {
        st[++top]=var;
     }
     int pop()
     {
        return st[top--];
     }
};
int main()
{
    stack s;
    s.push(11);
    s.push(22);
    s.push(33);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
}