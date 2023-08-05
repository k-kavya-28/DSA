#include<iostream>
using namespace std;
int main()
{
    int amt;
    cout<<"Enter amount: "<<endl;
    cin>>amt;
    int n=1;
    int hun,fifty,twenty,one;

    switch(n){
        case 1:{
            hun=amt/100;
            amt=amt-(100*hun);
            cout<<"Hundred notes required: "<<hun<<endl;

        }
        case 2:{
            fifty=amt/50;
            amt=amt-(50*fifty);
            cout<<"Fifty notes required: "<<fifty<<endl;

        }
        case 3:{
            twenty=amt/20;
            amt=amt-(20*twenty);
            cout<<"twenty notes required: "<<twenty<<endl;    
        }
        case 4:{
            one=amt/1;
            amt=amt-(1*one);
            cout<<"one notes required: "<<one<<endl;

        }
        default : if(amt==0){
            exit(0);
        }
    }
    return 0;
}