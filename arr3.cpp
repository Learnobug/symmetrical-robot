#include<iostream>
using namespace std;
void reverse(int array[],int size)
{
    for(int i=1;i<=size;i++)
    {
        cout<<array[size-i]<<" ";
    }
}

int main()
{
    int arr[100];
    int size;
    cin>>size;
     reverse(arr,size);
    return 0;
}