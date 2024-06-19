class Solution
{
public:

    void solve(Node* root, int sum, int &maxSum, int len, int &maxLen){
        //base case
        if(root == NULL){
            if(len > maxLen){
                maxLen = len;
                maxSum = sum;
            }
            else if(len == maxLen){
                maxSum = max(sum, maxSum);
            }
            return;
        }
        
        sum += root->data;
        
        solve(root->left, sum, maxSum, len+1, maxLen);
        solve(root->right, sum, maxSum, len+1, maxLen);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        int sum = 0;    //curr path sum
        int maxSum = INT_MIN;
        
        int len = 0;
        int maxLen = 0;
        
        solve(root, sum, maxSum, len, maxLen);
        
        return maxSum;
    }
};