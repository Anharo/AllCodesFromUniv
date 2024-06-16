#include<iostream>
#include<cstring>
using namespace std;
class String
{
    protected:
    char *str;
    public:
    String(char *s)
    { 
        int length =strlen(s);
        str =new char[length+1];
        strcpy(str,s);
    }
    ~String()
    {
        cout<<"Deleting String \n";
        delete[]str;
    }
    void display()
    {
        cout<<str<<endl;
    }

};
int main()
{
    String s1="Yo what's Up good man";
    s1.display();
    return 0;
}