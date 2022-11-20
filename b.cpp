#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout<<9;
    int n,ans;
    cin>>n;
     
     while(n!=0)
     {
        int bit,i=0;
        bit=n&1;
        if (bit==1)
        {
            ans=ans+pow(2,i);
             i++;
        }
     }
     cout<<ans;
     return 0;
}