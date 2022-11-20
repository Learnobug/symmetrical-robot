#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int sm=12;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            for(int k=j+1;k<5;k++)
            {
                cout<<arr[i]<<endl;
                cout<<arr[j]<<endl;
                cout<<arr[k]<<endl;
                if(arr[i]+arr[j]+arr[k]==sm)
                {
                   cout<<arr[i]<<endl;
                   cout<<arr[j]<<endl;
                   cout<<arr[k]<<endl;
                }
            }
        }
    }
}