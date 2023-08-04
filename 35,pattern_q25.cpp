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
        int star=1;
        while(star<=n-i+1){
            cout<<i+star-1;
            star=star+1;
        }
        
        cout<<endl;
        i+=1;
    }

    return 0;
}