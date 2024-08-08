class Solution {
  public:
    int solve(vector<vector<int>>& mat, int i, int j, int& maxi){
        //base case -> matrix se bahar nikal gye toh
        if(i>= mat.size() || j>=mat[0].size()){
            return 0;
        }
        int right = solve(mat, i, j+1, maxi);
        int diag = solve(mat, i+1, j+1, maxi);
        int down = solve(mat, i+1, j, maxi);
        
        if(mat[i][j] == 1){
            int ans = 1+min(right,min(diag,down));
            maxi = max(ans, maxi);
            return ans;
        }
        else{
            return 0;
        }
    }
    int solveMem(vector<vector<int>>& mat, int i, int j, int& maxi, vector<vector<int>>& dp){
        //base case -> matrix se bahar nikal gye toh
        if(i>= mat.size() || j>=mat[0].size()){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int right = solveMem(mat, i, j+1, maxi, dp);
        int diag = solveMem(mat, i+1, j+1, maxi, dp);
        int down = solveMem(mat, i+1, j, maxi, dp);
        
        if(mat[i][j] == 1){
            dp[i][j] = 1+min(right,min(diag,down));
            maxi = max(dp[i][j], maxi);
            return dp[i][j];
        }
        else{
            return dp[i][j] = 0;
        }
    }
    
    int solveTab(vector<vector<int>>& mat, int& maxi){
        int row = mat.size();
        int col = mat[0].size();
        vector<vector<int>> dp(row+1, vector<int>(col+1, 0));
        //base case -> matrix se bahar nikal gye toh
        // if(i>= mat.size() || j>=mat[0].size()){
        //     return 0;
        // }
        //iski zarurat ni as bahar ni jaenge ham 
        for(int i=row-1; i>=0; i--){
            for(int j=col-1; j>=0; j--){
                int right = dp[i][j+1];
                int diag = dp[i+1][j+1];
                int down = dp[i+1][j];
                
                if(mat[i][j] == 1){
                    dp[i][j] = 1+min(right,min(diag,down));
                    maxi = max(dp[i][j], maxi);
                    // return dp[i][j]; kuch return ni krna hmein
                }
                else{
                    // return dp[i][j] = 0; kuch return ni krna hmein
                    dp[i][j] = 0;
                }
            }
        }
        return dp[0][0];    //kuch bhi return krdo hmein toh maxi use krna h
    }
    
    int solveSO(vector<vector<int>>& mat, int& maxi){
        int row = mat.size();
        int col = mat[0].size();
        // vector<vector<int>> dp(row+1, vector<int>(col+1, 0));
        //iski koi need ni hai bas 2 vector use kr rhe hain
        vector<int> prev(col+1, 0);
        vector<int> curr(col+1, 0);
        //now replacing dp[i] with prev and dp[i+1] with curr everywhere
        for(int i=row-1; i>=0; i--){
            for(int j=col-1; j>=0; j--){
                int right = prev[j+1];
                int diag = curr[j+1];
                int down = curr[j];
                
                if(mat[i][j] == 1){
                    prev[j] = 1+min(right,min(diag,down));
                    maxi = max(prev[j], maxi);
                    // return dp[i][j]; kuch return ni krna hmein
                }
                else{
                    // return dp[i][j] = 0; kuch return ni krna hmein
                    prev[j] = 0;
                }
            }
            //after every iteration update
            curr = prev;
        }
        return curr[0];    //kuch bhi return krdo hmein toh maxi use krna h
    }
    
    int maxSquare(int n, int m, vector<vector<int>> mat) {
        //recursion
        // int maxi = 0;
        // solve(mat, 0,0, maxi);
        // return maxi;
        
        
        //rec+mem
        //sare test cases chal gye
        // int maxi = 0;
        // vector<vector<int>> dp(n, vector<int>(m, -1));
        // solveMem(mat,0,0,maxi,dp);
        // return maxi;
        
        
        //tabulation
        // int maxi = 0;
        // solveTab(mat,maxi);
        // return maxi;
        
        
        //space optimisation
        int maxi = 0;
        solveSO(mat, maxi);
        return maxi;
    }
};