#include<iostream>
#include<math.h>
using namespace std;

int dectobin(int n){
        int ans=0;
        int i=0;
        while(n!=0){
            int bit = n&1;
            ans=(bit*pow(10,i))+ans;

            n=n>>1;
            i++;
        }
        return ans;
    }

int main()
{
    
    int n;
    cout<<"Enter negative number :"<<endl;
    cin>>n;
    n=n*(-1);
    int dec=dectobin(n);
    //2s compliment
    dec=(~dec);
    dec=dec+1;
    


    cout<<dec<<endl;
}