#include <iostream>
using namespace std;
void sort(int b[], int c)
{
    int temp = 0;
    for (int i=0; i<c; i++)
    {
        for (int j=i+1; j<c; j++)
        {
            if (b[i] < b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    
}

void show(int k[],int m)
{
    cout << "After:" << endl;
    for (int l = 0; l < m; l++)
    {
        cout << "Elements: " << k[l] << endl;
    }
}
int main()
{
    int arr[]={4,2,7,98,12,32};
    int len= sizeof(arr) / sizeof(arr[0]);
    cout<<"Before:"<<endl;
    for(int o=0;o<len;o++)
    {
        cout<<"Elements:"<<arr[o]<<endl;
    }
    sort(arr,len);
    show(arr,len);
    return 0;
}