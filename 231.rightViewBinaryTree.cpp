class Solution
{
    public:
    void solve(Node* root, vector<int> &ans, int level){
        //base case
       if(root == NULL){
           //return ans;    ye ni hoga take care
           return;
       }
       
       //check condition if we entered new level
       if(level == ans.size()){
           ans.push_back(root->data);
       }
       solve(root->right, ans, level+1);
       solve(root->left, ans, level+1);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       vector<int> ans;
        solve(root, ans, 0);    //0 is level
        return ans;
    }
};