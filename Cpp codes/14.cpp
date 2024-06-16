#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name,nickname,address;
    string greeting("Hello");
    cout<<"Enter Your name:"<<endl;
    getLine(cin,name);
    cout<<"Enter Nickname:"<<endl;
    cin>>nickname;
    greeting+= nickname;
    cout<<"Enter Your address in seprate Line:";
    cout<<"Terminate with $";
    getLine(cin,address,'$');
    cout<<"\n Your Address:"<<address;
    return 0;

}