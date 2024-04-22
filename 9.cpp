#include<iostream>
#include<iomanip>
using namespace std;

    int main()
    {
        int max=20;
        char str[max];
        cout<<"Enter your name"<<endl;/*word---> cin , String--->cin.get(str,max) , Multiline string--->cin.get(str,max,'$')*/
        cin.get(str,max,'$');
        cout<<str;
        return 0;
    }
