#include<iostream>
using namespace std;

int factorial(int n){
    // cout<<n<<endl;   boht lamba output then segmentation fault
    // if(n==0){
    //     return 1;
    // }    //if base case is not mentioned it gives segmentation fault

    // int chhoti = factorial(n-1);
    // int badi = n * chhoti;
    // return badi;

    return n*factorial(n-1);

}

int main()
{
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;


 return 0;
}