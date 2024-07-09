//this is codingninjas int form solution, char type is on leetcode

#include <bits/stdc++.h> 

bool isSafe(int row, int col, vector<vector<int>>& board, int val, int n){
    for(int i=0; i<n; i++){
        //row check and col check
        if((board[row][i] == val) || (board[i][col] == val)){
            return false;
        }

        //3*3 matrix check
        if(board[3*(row/3)+i/3][3*(col/3)+i%3] == val){
            return false;
        }
    }

    return true;
}

bool solve(vector<vector<int>>& board){
    int n = board[0].size();

    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            //if cell empty
            if(board[i][j] == 0){
                for(int val = 1; val<=9; val++){
                    if(isSafe(i, j, board, val,n)){
                        board[i][j] = val;
                        //recursive call
                        bool aageSolutionPossible = solve(board);
                        if(aageSolutionPossible){
                            return true;
                        }
                        else{
                            //backtrack
                            board[i][j] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void solveSudoku(vector<vector<int>>& sudoku)
{
	solve(sudoku);
}