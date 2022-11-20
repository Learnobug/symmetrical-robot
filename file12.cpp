#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    cout<<"are you a robot?"<<endl;
    char chk[80],pass[80]="no";
    cin>>chk;
    if(!strcmp(pass,chk))
    {
        cout<<"welcome"<<endl;
    }
    else
    {
        cout<<"sorry!you can't proceed"<<endl;
    }
    return 0;
}