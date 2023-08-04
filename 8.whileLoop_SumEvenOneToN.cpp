#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter: "<<endl;
    cin>>n;
    int sum=0,i=2;
    while (i<=n) {
        sum+=i;
        i+=2;
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}