#include<cstring>
#include<iostream>
using namespace std;
class String{
    private:
    char str[80];
    public:
    String()
    {
        str[0]='\0';

    }
    String(char s[])
    {
      strcpy(str,s);   
    }
    void display()
    {
        cout<<str<<endl;
    }
    void concat(String s2)
    {
        if (strlen(str)+strlen(s2.str)<80)
        strcat(str,s2.str);
        else
        cout<<"String is too big"<<endl;
    }
};
int main()
{
    String s1("Happy Thursday");
    String s2("To You");
    String s3;
    s1.display();
    s2.display();
    s3.display();
    s3=s1;
    s3.concat(s2);
    s3.display();
    return 0;
}