#include <iostream>
using namespace std;
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sort(int arr[],int size)
{
    for(int i=0;i+1<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int main()
{
    cout<<"enter the size of array(must be odd no.)"<<endl;
    int size;
    cin>>size;
    //taking input array
    cout<<"enter the array elements:"<<endl;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    sort(arr,size);
    cout<<endl;
    for(int i=0;i<size;i+=2)
    {
    if(arr[i]!=arr[i+1])
    {
        cout<<"the unique element in array is "<< arr[i]<<endl;
    }
}
}