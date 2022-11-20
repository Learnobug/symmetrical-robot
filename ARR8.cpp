#include <iostream>
using namespace std;
void sort(int arr[],int size )
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
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
   cout<<"enter the size of array: ";
   int size;
   cin>>size;
   int arr[size];
   for(int i=0;i<size;i++)
   {
    cin>>arr[i];
   }
   cout<<"given array is "<<endl;
   print(arr,size);
   cout<<endl;
   sort(arr,size);
   print(arr,size);
   cout<<endl;
   int count=1;
   int take=0;
   for(int i=0;i<size;i+=count)
   {
    if(arr[i]=arr[i+1])
   {
        count++;
    }
    else{
        count=1;
    }
    take++;
    int ans[take]={count};
    sort(ans,take);
     print(ans,take);
   }
   
}
