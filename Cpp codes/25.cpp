#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char *str ="Idle Hands are devil's Workshop";
    int len =strlen(str);
    char *ptr;
    ptr = new char[len+1];
    strcpy(ptr,str);
    cout<<ptr;
    delete[]ptr;
    return 0;
}