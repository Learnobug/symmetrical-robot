#include <iostream>
using namespace std;
int main()
{
    int n1;
    cin>>n1;
     int i=1,count=3;
     while(i<=n1)
     {
        int j=1;
        while(j<=n1)
        {
            cout<<count<<" ";
            count=count+3;
            j++;
        }
        cout<<endl;
        i++;
     }
}
/*4
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16 */