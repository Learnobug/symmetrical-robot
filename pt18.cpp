#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n!=0)
    {
        int i=0;
        int digit=n%2;

        if(digit==0)
        {
            ans=ans+pow(2,i);
        }
    }
    cout<<ans<<endl;
    
}