#include<iostream>
using namespace std;
int main()
{  
    int count=1,sum=0,n1=0;
    cout<<"please entre the number for get sum to that number : " <<endl;
    cin>>n1;
    while(count<=n1)
    {
      sum+=count;// same as sum=sum+count
      count=count+1;
    }
    cout<<"the sum of numbers 1 to "<< n1 << " is "<< sum <<endl;
    return 0;
}