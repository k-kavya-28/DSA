//ye bas recursion smjhne k liye h TLE de rha obv as isko DP me convert kr skte hain boht sare cases hai jo repeat kr rhe hain

#include <bits/stdc++.h> 

int solve(int nStairs, int i){
    //i is the current state

    //base case
    if(i == nStairs){
        return 1;   //jahan tha wahin jana h wala case
    }

    //agar exceed ho gya
    if(i > nStairs){
        return 0;
    }

    //baaki recursion dekhlega
    return (solve(nStairs, i+1) + solve(nStairs, i+2));
}

int countDistinctWays(int nStairs) {
    int ans = solve(nStairs, 0);    //0 is the starting stair
    return ans;
}