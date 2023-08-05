#include<iostream>
using namespace std;

//1->even
//0->odd
bool isEven(int a){
    if(a&1){
        return 0;
    }
    return 1;
}

int main()
{
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    cout<<isEven(n)<<endl;
    return 0;
}