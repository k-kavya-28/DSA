#include<iostream>
using namespace std;

bool isPrime(int n){
    bool flag=1;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}