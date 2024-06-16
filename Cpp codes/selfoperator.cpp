#include<iostream>
using namespace std;
class Anharo
{
public:
    int aa,bb;
    Anharo(int a ,double b)
    {
        aa =a;
        bb=b;
    }
    Anharo()
    {
     aa=0;bb=0;
    }
    Anharo operator+(Anharo a2)
    {
        Anharo temp;
        temp.aa= aa+a2.aa;
        temp.bb= bb+a2.bb;
        return temp;
    }
    void show()
    {  
      cout<<"1ST DIGIT:"<<aa<<" 2ND DIGIT:"<<bb;
    }
};
int main()
{
    Anharo a1(30,20);
    Anharo a2(10,20);
    Anharo b2;
    b2= a1+a2;
    b2.show();
    return 0;

}