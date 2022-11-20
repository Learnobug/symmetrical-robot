#include <iostream>
using namespace std;
int main()
{
  cout<<"enter number plz:"<<endl;
  int n1=0,n2=1,mul=1;
  cin>>n1;
  while(n2<=n1)
  {
    mul=n2*mul;
    n2=n2+1;
  }
  cout<<"the factorial of "<< n1<<" is "<< mul <<endl;
   return 0 ;
}

  
