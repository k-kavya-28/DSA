class Solution {
public:
    int climbStairs(int n) {
        if(n<0){
            return 0;
        }
        if(n==0){
            return 1;   //0th stair se 0th stair tk jane ka ek hi tareeka hai
        }
        return climbStairs(n-1)+climbStairs(n-2);
        
    }
};