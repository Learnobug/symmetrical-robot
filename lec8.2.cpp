#include <iostream>
using namespace std;
int fabi(int n)
{
    int a=0,b=1,ans=0;
    for(int i=2;i<n;i++)
    {
        ans=a+b;
       a=b;
       b=ans;
    }
    return  ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<"the "<<n<<"th no. of fabinaco series is"<<fabi(n)<<endl;
    return 0;
}
