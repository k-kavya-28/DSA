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