#include <iostream>
using namespace std;
int getsum(int array[],int size)
{
  int sum=0;
  for(int i=0;i<size;i++)
  {
    sum+=array[i];
  }
  return sum;
}
int main()
{
    int array[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin >> array[i];
    }
    cout<<"sum of all elements is"<< getsum(array,size)<<endl;
    return 0;
}