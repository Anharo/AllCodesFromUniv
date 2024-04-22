#include<iostream>
using namespace std;
class Distance{
    private:
     int feet;
     float inch;
     public:
     Distance()
     {
        feet=0;
        inch=0;
     }
     void getis()
     {
        cout<<"Enter feet";
        cin>>feet;
        cout<<"Enter inch";
        cin>>inch;
     }
     void show()
     {
        cout<<feet<<"\'_"<<inch<<"\''"<<endl;
     }
};
     int main()
     {
        Distance d[4];
        int n=0;
        char ans;
        
        do
        {
            cout<<"Enter Distance number"<<n+1<<endl;
            d[n++].getis();
            cout<<"Enter Another(Y/N)?"<<endl;
            cin>>ans;
        }
        while(ans!='N');
        for(int j=0;j<n;j++)
        {
            cout<<"\nDistance Number"<<j+1<<"is";
            d[j].show();
        }
        return 0;
     }
