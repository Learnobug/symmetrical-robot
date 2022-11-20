#include <iostream>
using namespace std;
int main()
{
    char b;
    cout<<"enter here:";
    cin>>b;
    if(b>='a'&&b<='z')
    {
        cout<<"this is lower case"<<endl;
    }
    else if(b>='A'&&b<='Z')
    {
        cout<<"this is upper case"<<endl;
    }
    else
    {
        cout<< "this is numbers"<<endl;
    }
    return 0;
}