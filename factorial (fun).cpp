#include <iostream>
#include <math.h>
using namespace std;
int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    { 
      ans=ans*i;
    }
    return ans;
}
int ncr(int n,int r)
{
    int num= fact(n);
    int dum=fact(r)*fact(n-r);
    int val=num/dum;
     return val;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<< ncr(n,r) << endl;
    return 0;
}