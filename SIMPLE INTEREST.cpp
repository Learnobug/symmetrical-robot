#include <iostream>
using namespace std;
int main()
{
    cout<<"to calculate simple interest: "<<endl << " principal value: "<<endl;
    int n1=0;
    cin>>n1;
    cout<<"rate of interest:"<<endl;
    int n2=1;
    cin>>n2;
    cout<<"time:"<<endl;
    int n3=1;
    cin>>n3;
     int si=0;
     si=n1*n2*n3/100;
     cout<<" simple intrest: "<< si <<endl;
    return 0;
}