#include<iostream>
using namespace std;
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sort(int array[],int size)
{
    for(int i=0;i+1<size;i++)
    { 
        for(int j=i+1;j<size;j++)
        {
        if(array[i]>array[j])
        {int temp=array[j];
          array[j]=array[i];
          array[i]=temp;
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
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    print(arr,size);
    cout<<endl;
    sort(arr,size);
    print(arr,size);
}
    
    