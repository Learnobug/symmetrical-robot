#include <iostream>
using namespace std;
int main()
{
    int choice=0;
    cout<<" plz entre: "<<endl<<" 1-for coffee."<<endl<<"2-for tea."<<endl;
    cin>> choice;
     if(choice==1)
     {
        cout<<"coffee is on the way . thankyou "<<endl;
     } 
      else if (choice==2)
      {
        cout<<"tea is on the way . thankyou "<<endl;
      }
      else
      {
        cout<<"sorry! only coffee and tea availabe"<<endl;
      }
      return 0;
}