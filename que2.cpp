#include <iostream>
#include <math.h>

using namespace std;
int main()
{
   int n;
    cin>>n;
    cout<<n;
     int ans=0,i=0;
    int digit,answere;
    while(n!=0)
    {
        digit=n%10;
        if(digit==1)
        {
            ans=pow(2,i)+ans;
        }   
        i++;
        n=n/10;
    }
    cout<<ans;
    
    return 0;
}  