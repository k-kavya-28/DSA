#include<iostream>
using namespace std;

int factorial(int a){
    int fact = 1;
    for (int i=1; i<=a; i++){
        fact=fact*i;
    }
    return fact;
}

int ncr(int n, int r){
    int num=factorial(n);
    int den=factorial(r)*factorial(n-r);
    int ans=num/den;
    return ans;
}

int main()
{
    int n,r;
    cout<<"Enter n,r: "<<endl;
    cin>>n>>r;
    int result=ncr(n,r);
    cout<<result<<endl;
    return 0;
}