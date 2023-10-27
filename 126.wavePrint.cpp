#include <bits/stdc++.h> 
#include<vector>


vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here

    vector<int> ans;

    for(int col=0; col<mCols; col++){
        // if(col&1){
        if(col%2 != 0){
            // odd index -> bottom to top
            for(int row=nRows-1; row>=0; row--){
                ans.push_back(arr[row][col]);
            }

        }
        else{
            //even or 0 index -> top to bottom
            for(int row=0; row<nRows; row--){
                ans.push_back(arr[row][col]);
            }
        }
    }

    return ans;
}

//complexity -> 0(n*m)