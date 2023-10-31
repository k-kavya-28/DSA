class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n+1, true); //n-1 wala jhanjhat ni kiya and sbko set to true
        prime[0] = prime[1] = false;
        int cnt =0;
        for(int i=2; i<n; i++){
            if(prime[i]){
                cnt++;

                for(int j=2*i; j<n; j=j+i){   // replace 2*i with i*i this will optimise . write down and see the i*i is say 25 then for i=5 15,20 etc will already have smaller divisors 
                    prime[j]=false;
                }
            }
        }
        return cnt;
    }
};