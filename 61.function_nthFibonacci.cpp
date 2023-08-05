#include<iostream>
using namespace std;

int nthTerm(int n){
    int a=0,b=1;
    for (int i=3; i<=n; i++){
        int ans = a+b;
        a=b;
        b=ans;
    }
    return b;
}

int main()
{
    int n;
    cout<<"Enter: "<<endl;
    cin>>n;
    if(n==1){cout<<0<<endl;}
    if(n==2){cout<<1<<endl;}
    int term = nthTerm(n);
    cout<<nthTerm(n)<<endl;
    return 0;
}