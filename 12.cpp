#include <iostream>
using namespace std;

int main() {
    char a[50];
    cout<<"Enter a String"<<endl;
    cin.get(a,50);
    int i=0;
  while(a[i]!='\0')
    {
        if(a[i]!=' ')
        {
            a[i]-=32;
        }
        i++;
    
    }
cout<<a;
    return 0;
}
