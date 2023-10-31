#include<iostream>

using namespace std;

bool isPrime(int n){
    if(n<=1)return false;
    for(int i=2; i<n; i++){         //O(n-2)=O(n)  - Time complexity, where n is the number you are checking
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    
    return 0;
}