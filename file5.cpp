#include <iostream>
using namespace std;
int main()
{
    int n1=0,n2=2;//to get of even number btw 1 to n
    cout << "enter the number:"<<endl;
    cin>>n1;
    while(n2<n1)
    {
        if(n2%2==0)
        {
            cout<<n2;
            n2=n2+2;
        }
    }     
    return 0;
}