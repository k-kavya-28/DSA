#include<iostream>
using namespace std;

int nthTerm(int n){
    return 3*n+7;
}

int main()
{
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    cout<<nthTerm(n)<<endl;
    return 0;
}