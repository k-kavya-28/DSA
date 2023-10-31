#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

vector<long long> prime;

void sieve(int n) {
        vector<bool> isPrime(n+1, true); //n-1 wala jhanjhat ni kiya and sbko set to true
        isPrime[0] = isPrime[1] = false;
        for(long long int i=2; i<n; i++){
            if(isPrime[i]){
                isPrime.push_back(i);

                for(long long int j=i*i; j<=n; j=j+i){   // replace 2*i with i*i this will optimise . write down and see the i*i is say 25 then for i=5 15,20 etc will already have smaller divisors 
                    isPrime[j]=false;
                }
            }
        }
    }

void segsieve(int l, int h){
    long long sq = sqrt(h);
    sieve(sq);
    vector<bool> isPrime(h-l+1, true);
    for(long long p: prime){
        long long sm = (l/p)*p;
        if(sm<l){sm+=p;}
        for(long long m=sm; m<=h; m+=p){
            isPrime[m-l]=false;
        }
        
    }
    for(long long i=l; i<=h; i++){
        if(isPrime[i-l]==true){
            cout<<i<<" ";
        }
    }
    cout<<endl;

}

int main()
{
    prime.clear();
    segsieve(5,9);

    
    return 0;
}