#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int row=1;
     while(row<=n)
     {
       int j=1,val=row;
       while(j<=row)
       {
        cout<<val<<" ";
        val=val-1;
        j=j+1;
       }
       cout<<endl;
       row++;
     }
     return 0;
}
/*4
1 
2 1 
3 2 1 
4 3 2 1 */