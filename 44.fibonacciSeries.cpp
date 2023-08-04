#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int a=0, b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=1; i<=n; i++){
        int nextNum =a+b;
        cout<<nextNum<<" "<<endl;

        a=b;
        b=nextNum;
    }
    return 0;
}