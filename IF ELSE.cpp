#include <iostream>
using namespace std;
int main()
{
    cout<<"enter the number plz:"<<endl;
    int n1=0;
    cin>>n1;
    if(n1>0)
    {
        cout<<"the number is positive"<<endl;
    }
    else if(n1<0)
    {
        cout<<"the number is negative"<<endl;
    }
    else
    {
        cout<<"the number is zero"<<endl;
    }
    return 0;
}