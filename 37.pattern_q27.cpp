#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter: "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){

        //spaces
        int space=n-i;
        while(space){
            cout<<" ";
            space-=1;
        }

        //1st triangle
        int j=1;
        while(j<=i){
            cout<<j;
            j+=1;
        }

        //2nd triangle vvviiiii
        int start=i-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}