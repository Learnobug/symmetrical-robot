        #include <iostream>
        #include<math.h>
using namespace std;
int main()
{ int n,ans=0,chk=0;
cin>>n;
for(int i=0;i<=30;i++)
{
    ans=pow(2,i);
    if(n==ans)
    {
        cout<<"true";
        chk++;
    }

}
if(chk==0)
{
    cout<<"false";
}
return 0;
}