#include <iostream>
using namespace std;
int m(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])max=arr[i];
    }
    return max;
}
void redixSort(int arr[],int n,int place)
{
    int count[10]={0};
    int *output=new int[n];
    for(int i=0;i<n;i++)
    {
        count[(arr[i]/place)%10]++;
    }
    for(int i=1;i<10;i++)
    {
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        output[count[(arr[i]/place)%10]-1]=arr[i];
        count[(arr[i]/place)%10]=count[(arr[i]/place)%10]-1;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
}
int main()
{
    int arr[100],n;
    cout<<"enter n ";
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"\nbefore sorting ";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    int max=m(arr,n);
    for(int i=1;max/i>0;i*=10)
    {
        redixSort(arr,n,i);
        cout<<endl;
         for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    }
    
    cout<<"\nafter sorting ";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}