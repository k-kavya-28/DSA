void inorderTraversal(TreeNode<int>* root, vector<int> &inorderArr){
        if(root == NULL){
            return;
        }
        inorderTraversal(root->left, inorderArr);
        inorderArr.push_back(root->data);
        inorderTraversal(root->right, inorderArr);
    }
TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int> inorderArr;
    inorderTraversal(root, inorderArr);
    int n = inorderArr.size();

    TreeNode<int>* newRoot = new TreeNode<int>(inorderArr[0]);
    TreeNode<int>* curr = newRoot;
    for(int i = 1; i<n; i++){
        TreeNode<int> *temp = new TreeNode<int>(inorderArr[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }
    //ab tak last element ko chhodke sab process ho chuke hain
    curr->left = NULL;
    curr->right = NULL;

    return newRoot;
}