#include<iostream>
using namespace std;

// int power(int a, int b){
//     int ans=1;
//     for(int i=1; i<=b; i++){
//         ans=ans*a;
//     }
//     return ans;
// }
// int main()
// {
//     int a,b,ans;
//     cout<<"Enter a and b: "<<endl;
//     cin>>a>>b;

//     ans=power(a,b);
//     cout<<"Answer: "<<ans<<endl;
//     return 0;


int power(){
    int a,b;
    cout<<"Enter a,b: "<<endl;
    cin>>a>>b;
    int ans=1;
    for(int i=1; i<=b; i++){
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int ans=power();
    cout<<"Answer: "<<ans<<endl;
    return 0;
}