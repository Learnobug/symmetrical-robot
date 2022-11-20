#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int  a=0,b=0;
    cout<<"enter the value of a and b ";
    cin>>a>>b;
    cout<<"enter the opreration you want perform:";
    char op;
    cin>>op;
    switch(op)
    { 
        case  '*':cout<< (a*b) <<endl;
                  break;
        case  '/':cout<< (a/b) <<endl;
                  break; 
        case  '+':cout<< (a+b) <<endl;
                  break;
        case  '-':cout<< (a-b) <<endl;
                   break;
        case  '%':cout<< (a%b) <<endl;
                  break;
    }
    return 0;
}