#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        int val=i;
        for(int m=1;m<=i;m++)
        {
            cout<<val;
            val=val-1;
        }
        for(int m=2;m<=i;m++)
        {
            cout<<m;
        }
        cout<<endl;
    }
}