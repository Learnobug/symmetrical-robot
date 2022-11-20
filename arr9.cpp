#include<iostream>
using namespace std;
void sort(int arr[],int size)
{

    for(int i=0;i+1<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
           { int  tamp=arr[j];
            arr[j]=arr[i];
            arr[i]=tamp;

        }
    }
}
}
int main()
{
  int arr[7]={4,7,5,2,8,1,9};
  for(int i=0;i<7;i++)
  {
    cout<<arr[i]<<"  "<<endl;
  }
  cout<<"enter element to search:"<<endl;
  int key;
  cin>>key;
  sort(arr,7);
  for(int i=7/2;0<=i<=6)
  {

  }