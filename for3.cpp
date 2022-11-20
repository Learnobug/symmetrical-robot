#include <iostream>
using namespace std;
int main()
{
    int a=0,b=1;
    int n;
    cout<< a << endl << " " << b << endl;
    for(int i=1; i<=10; i++)
    {
        n= a+b;
        cout<< n << endl;

        a=b;
        b=n;
    }
    return 0;
}