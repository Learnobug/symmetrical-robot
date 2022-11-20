 #include<iostream>
 #include<math.h>
 using namespace std;
 int main()
 {
        int ans=0,bit=0,i=0,n=0;
        cout<<"enter the no."<<endl;
        cin>>n;
        while(n!=0)
        {
            bit=n&1;
            ans=(pow(10,i)*bit)+ans;
            n=n>>1;
            i++;
        }
    cout<<ans<<endl;
}
