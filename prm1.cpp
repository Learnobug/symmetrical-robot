#include <iostream>
using namespace std;
int main()
{
    int num,i=2,ck=0;
    cout<<"enter the number plz:"<<endl;
    cin>>num;
    while(i<=num)
    {
        if(num%i==0&&num!=2)
        {
            cout<<"not prime"<<endl;
            break;
        }
        else if(num%i!=0)
        {
            cout<<"prime"<<endl;
            break;
        }
        else if(num==2)
        {
            cout<<"prime"<<endl;
            break;
        }       
        i=i+1;
    }
    return 0;
}