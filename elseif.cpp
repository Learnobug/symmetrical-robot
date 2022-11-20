#include <iostream>
using namespace std;
int main()
{
    cout<<" entre the number :"<<endl;
    int n1=0;
    cin >> n1;
    if (n1<10)
    {
        cout<<"the number is less than 10 "<<endl;
    }
    else if(10 < n1 )
    {
        cout<<" the number is between 10 "<<endl;
    }
    else
    {
        cout<<" the number is equal to 10 "<<endl;
    }
    return 0;
}