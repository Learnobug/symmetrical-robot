#include <iostream>
using namespace std;
int main()
{ 
    cout<<"enter the number for get sum to that: ";
    int n1=0, n2=0;
    cin >> n1;
    for (int i=1;i<=n1;i++)
    {  
        n2=n2+i;
    }
    cout <<"sum of 1 to " << n1 << " is "<< n2 << endl;
    return 0 ;
}