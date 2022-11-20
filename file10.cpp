#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    cout<<"creat a password:";
    char pass[80],chk[80];
    int n1=0,n2=0;
    cin>>pass;
    cout<<"enter two numbers to add"<<endl;
    cin>>n1;
    cin>>n2;
    cout<<"enter the password to add the numbers:";
    cin>>chk;
    if(!strcmp(pass,chk))
    {
        cout<<"correct password"<<endl;
        cout<<n1+n2<<endl;
    }
    else
    {
        cout<<"wrong password";
    }
    return 0;
}