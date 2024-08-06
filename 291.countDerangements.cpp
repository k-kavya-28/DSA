#define MOD 1000000007
#include<vector>

long long int solveMem(int n, vector<long long int> &dp){
    //base case
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = (   ((n-1)%MOD)  *  ((solveMem(n-1, dp)%MOD) + (solveMem(n-2, dp)%MOD))   )%MOD;
    return dp[n];
}

long long int solveTab(int n){
    vector<long long int> dp(n+1, -1);
    dp[1] = 0;
    dp[2] = 1;

    for(int i = 3; i<= n; i++){
        long long int first  = dp[i-1] % MOD;
        long long int second = dp[i-2] % MOD;
        long long int sum = (first + second) % MOD;
        long long int ans = ((i-1)*sum) % MOD;
        dp[i] = ans;
    }
    return dp[n];
}

long long int solveSO(int n){
    long long int prev2 = 0;
    long long int prev1 = 1;

    for(int i = 3; i<= n; i++){
        long long int first  = prev1 % MOD;
        long long int second = prev2 % MOD;
        long long int sum = (first + second) % MOD;
        long long int ans = ((i-1)*sum) % MOD;
        //dp me store ni krana hai hmein bs ans me dalna tha ab prev1 and prev2 update krenge bs
        prev2 = prev1;
        prev1 = ans;
        //can return ans or prev1, but ans andr define kra h 
        //this is the logic for returning prev1
    }
    return prev1;
}

long long int countDerangements(int n) {
    //recursion + memoization
    // vector<long long int> dp(n+1, -1);
    // return solveMem(n, dp);


    //tabulation
    // return solveTab(n);


    //space optimisation
    return solveSO(n);
}