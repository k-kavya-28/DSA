#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        
        int space=1;
        while (space<=i-1){
            cout<<" ";
            space+=1;
        }
        int star=n-i+1;
        while(star){
            cout<<"*";
            star=star-1;
        }
        
        cout<<endl;
        i+=1;
    }

    return 0;
}