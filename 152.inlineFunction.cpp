#include<iostream>
using namespace std;

    // int getMax(int a, int b){
    //     return (a>b)?a:b ;
    // }
    // agar ternary use krke getMax function bhi bnao toh memory usage and function call wala issue aa rha h

    // int getMax(int& a, int& b){
    //     return (a>b)?a:b ;
    // }
    //chalo reference variable use karke memory bacha li but call toh abhi jaa rhi hai 

    //making it inline function
    inline int getMax(int& a, int& b){
        return (a>b)?a:b ;
    }

int main()
{
    int i = 1, j = 2;
    // if(i>j){
    //     cout<<i<<endl;
    // }
    // else{
    //     cout<<j<<endl;
    // }

    int ans = (i>j)?i:j ;
    cout<<ans<<endl;
    
    //updating i and j 
    i = 4;
    j = 3;
    ans = (i>j)?i:j ;
    // cout<<ans<<endl;
    //baar baar call krna pad rha hai 
    int ans2 = getMax(i,j);
    cout<<ans2<<endl;


 return 0;
}