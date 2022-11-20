#include <iostream>
using namespace std;
int main()
{
    cout<< "enter the numbers plz:"<<endl;
    int n1=0,n3=0,cnt=0;
     while(cin>>n1)
     { 
        n3=n1+n3;
        ++cnt;
     }
     int n2=0;
     n2=n3/cnt;
     cout<<"the average of given numbers are: "<< n2 << endl;
     return 0;
}