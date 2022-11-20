#include <iostream>
using namespace std;
int main()
{
    int sum=0,value=0;
    //read until the end of file
    while  (cin >> value)
       { sum += value ;//same as sum=sum+value
       }
       cout << " the sum of given numbers= " << sum <<endl;
    return 0;
}
