#include <iostream>
using namespace std;
//even=0
//odd=1
bool iseven()
{
    int a;
    if (a&1)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int num=0;
    cout<<"enter the number:"<<endl;
    cin>>num;
    if (iseven()==0)
    { cout<<"even";}
    else{
        cout<<"odd";
    }
    return 0;
}