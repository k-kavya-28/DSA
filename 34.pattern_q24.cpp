#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space-=1;
        }
        int col=1;
        while(col<=i){
            cout<<i;
            col+=1;
        }
        i+=1;
        cout<<endl;
    }
    return 0;
}