#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=n-row+1)
        {
            cout<<n-col+1;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}