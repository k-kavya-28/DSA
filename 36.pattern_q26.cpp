#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter: "<<endl;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space+=1;
        }
        
        int letter=1;
        while(letter<=i){
            cout<<count;
            count+=1;
            letter+=1;
        }

        i+=1;
        cout<<endl;
    }
    return 0;
}