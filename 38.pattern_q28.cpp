#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter: "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){

        //1st triangle
        int j=n-i+1;
        while(j){
            cout<<n-j+1;
            j=j-1;
        }

        //2nd triangle
        int k=2*i-1;
        while(k){
            cout<<"*";
            k-=1;
        }

        //3rd triangle
        int m=n-i+1;
        while(m){
            cout<<m;
            m=m-1;
        }

        cout<<endl;
        i+=1;
    }
    return 0;
}