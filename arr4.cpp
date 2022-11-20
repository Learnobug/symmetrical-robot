#include<iostream>
using namespace std;
void altrevrse(int arr[],int size)
{
    int num=0;
    int next=1;
    while(next<size)
    {
        swap(arr[num],arr[next]);
        num+=2;
        next+=2;
    }
}
void printarr(int aaray[],int size)
{
    for(int i=0;i<size;i++)
    cout<<aaray[i]<<"  ";
}
int main()
{
    int arr[5]={1,2,3,4,5};
    printarr(arr,5);
    cout<<endl;
    altrevrse(arr,5);
    printarr(arr,5);
    cout<<endl;
}