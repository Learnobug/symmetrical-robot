#include<iostream>
using namespace std;
bool found(int array[],int size,int key)
{
     for(int i=0;i<size;i++)
     {
        if(array[i]==key)
        {return 1;}
     }
    return 0;
}
int main()
{
    int arr[5]={3,8,9,7,2};
    cout<<"enter number to search"<<endl;
    int key;
    cin>>key;
    bool search = found(arr, 5 ,key);
    if( search)
    {
        cout<<"key is present";
    }
    else{
        cout<<"key is absent ";
    }
}