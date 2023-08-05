#include<iostream>
using namespace std;

int oneBits(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}

int setBits(int a, int b){
    return oneBits(a)+oneBits(b);
}

int main()
{
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Total number of bits: "<<setBits(a,b)<<endl;
    return 0;
}