#include <iostream>
#include <math.h>
using namespace std;
 
 //1->prime
 //0->not prime
  bool isprime(int n)
 {
    for(int i=2;i<n;i++)
    {
      if(n%i==0)
      {
        return 0;
      }
    }
    return 1;
 }
 int main()
 {
 int n ;
 cin >> n;
   if(isprime(n)) {
        cout <<" is a Prime number " <<endl;
   }
   else{
       cout<< "Not a prime number "<<endl;
   }
 }