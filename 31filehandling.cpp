#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    char ch='x';
    int j=77;
    double d=6.73;
    string str1;
    string str2;
    ifstream infile("fdata.txt");
    infile>>ch>>j>>d>>str1>>str2;
    cout<<ch<<endl<<j<<endl<<d<<endl<<str1<<endl<<str2;
    /*
    ofstream outfile("fdata.txt");
    outfile<<ch<<' '<<j<<' '<<d<<' '<<str1<<' '<<str2;
    cout<<"File Written";
    */
    return 0;
}