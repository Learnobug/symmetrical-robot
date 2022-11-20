#include <iostream>
using namespace std;
int printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int num[4]={1,2,3,4};
    cout<<printarray(num,2)<<endl;
    cout<<"gud";
}