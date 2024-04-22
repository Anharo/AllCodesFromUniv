#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int make()
{
    ofstream outfile("Test.txt");
    outfile<<"I feel we are hungry\n";
    outfile<<"What would you like to have? \n";
    outfile<<"I cant eat outside \n";
    return 0;
}
/*
int man()
{
    char buffer[80];
    ifstream infile("Test.txt");
    while(!infile.eof())
    {
        infile.getline(buffer,80);
        cout<<buffer<<endl;
    }
    return 0;
}*/
int main()
{
    char ch;
    ifstream infile("Test.txt");
    while(infile)
    {
        infile.get(ch);
        cout<<ch;
    }
    return 0;
}