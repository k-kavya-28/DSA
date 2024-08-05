#include <bits/stdc++.h> 

int solve(vector<int> &nums, int n){
    //we are trying to solve from back
    if(n<0){
        return 0;
    }
    if(n == 0){
        return nums[0];
    }

    int incl = solve(nums, n-2) + nums[n];
    int excl = solve(nums, n-1) + 0;

    return max(incl, excl);
}

int solveMem(vector<int> &nums, int n, vector<int> &dp){
    //we are trying to solve from back
    if(n<0){
        return 0;
    }
    if(n == 0){
        return nums[0];
    }

    if(dp[n] != -1){
        return dp[n];
    }

    int incl = solve(nums, n-2) + nums[n];
    int excl = solve(nums, n-1) + 0;

    dp[n] = max(incl, excl);

    return dp[n];
}

int solveTab(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n, 0);
    dp[0] = nums[0];

    for(int i=1; i<n; i++){
        int incl = dp[i-2] + nums[i];
        int excl = dp[i-1] + 0;
        dp[i] = max(incl, excl);
    }
    return dp[n-1];
}

int solveSO(vector<int> &nums){
    int n = nums.size();
    int prev2 = 0; //negative k liye 0 hi hai
    int prev1 = nums[0];

    for(int i=1; i<n; i++){
        int incl = prev2 + nums[i];
        int excl = prev1 + 0;
        int curr = max(incl, excl);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int maximumNonAdjacentSum(vector<int> &nums){
    //recursion
    // int n = nums.size();
    // int ans = solve(nums, n-1); //passing the last index
    // return ans;


    //recursion + memoization
    // int n = nums.size();
    // vector<int> dp(n, -1);
    // return solveMem(nums, n-1, dp); //take care that we have to pass the index of last and not n



    //tabulation
    return solveSO(nums);
}