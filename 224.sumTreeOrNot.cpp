class Solution
{
    public:
    pair<bool, int> isSumTreeFast(Node* root){
        //two base cases
         if(root == NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
         }
         //other than leaves
         if(root->left == NULL && root->right == NULL){
            pair<bool, int> p = make_pair(true, root->data);
            return p;
         }
         
         pair<bool, int> left = isSumTreeFast(root->left);
         pair<bool, int> right = isSumTreeFast(root->right);
         
         bool leftSum = left.first;
         bool rightSum = right.first;
         bool sum = root->data == (left.second + right.second);
         
         pair<bool,int> ans;
         //ans.second = root->data + left.second + right.second;
         //or
         ans.second = 2*root->data;
         if(leftSum && rightSum && sum){
             ans.first = true;
         }
         else{
             ans.first = false;
         }
         
         return ans;
         
    }
    bool isSumTree(Node* root)
    {
        return isSumTreeFast(root).first;
    }
};