#include <iostream>
#include <math.h>
using namespace std;
void printn(int n)
{
    for (int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}
int main()
{ 
    cout<<"enter the number"<<endl;
    int n;
    cin>>n;
    printn(n);
    return 0;
}

