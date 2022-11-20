#include <iostream>
using namespace std;
int main()
{
    int n1=0,n2=1;
    cout<<"enter the number to odd no. between them:"<<endl;
    cin>>n1;
    if(n2<n1)
    {
        while(n2%2==1)
        {
            cout<<n2;
            n2=n2+2;
        }
    }
    return 0;
}    