#include <iostream>
using namespace std;
int main()
{
    cout<<"enter the number plz:"<<endl;
    int n1,chk=0,i;
    cin>>n1;
    for(i=2;i<=n1;i++)
    {
        if(n1%i==0&&n1!=2)
        {
            chk++;
            break;
        }
    }
    if (chk==0)
    {
        cout<<"the no. is  prime"<<endl;
    }
    else
    {
        cout<<"the number is not prime"<<endl;
    }
    return 0;
}