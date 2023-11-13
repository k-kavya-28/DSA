#include<iostream>
using namespace std;

int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return (fib(n-2)+fib(n-1));
}

int main()
{
    int n;
    cin>>n;
    int ans = fib(n);
    cout<<ans<<endl;


 return 0;
}