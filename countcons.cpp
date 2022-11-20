#include <iostream>
using namespace std;
int main()
{
    //currrval is the number we're counting;we'll read new values into val
    int currval =0, val=0;
    //read first number and ensure that we have data to process
    if(cin>> currval)
    {
        int cnt=1;//store the count for th current value we're processing
        while( cin>>val)
        { //read the remaining numbers
            if(val == currval)//if the value are same
            ++cnt;//add 1 to cnt
            else{//otherwise,print the count for privious value
                cout<< currval <<" occur "<< cnt <<"  times  "<<endl;
                currval=val;//remember the new value
                cnt=1;//reset the counteR
            }
        }//while loop end here
        cout<<currval<<"occur"<<cnt<<"times"<<endl;

    }
    return 0;
}