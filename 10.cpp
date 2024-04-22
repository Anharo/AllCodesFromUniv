#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int Days=7;
    const int Max=12; 
    char str[Days][Max]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    for(int j=0;j<Days;j++)
    {
           cout<<str[j]<<endl;
        
    }
    return 0;
} 
