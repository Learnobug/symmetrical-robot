#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int n;
    cin>>n;
     int ans=0,i=0;
    int digit,answere;
    while(n!=0)
    {
        int digit=n&1;
        ans=ans+(digit*pow(10,i));
        i++;
        n=n>>1;
    }
    cout<<ans;
    
    return 0;
}  
