void inorderTraversal(TreeNode<int>* root, vector<int> &inorderArr){
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left, inorderArr);
    inorderArr.push_back(root->data);
    inorderTraversal(root->right, inorderArr);
}

TreeNode<int>* inorderToBST(int s, int e, vector<int> &inorderArr){
    //base case
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(inorderArr[mid]);
    root->left = inorderToBST(s, mid-1, inorderArr);
    root->right = inorderToBST(mid+1, e, inorderArr);
    return root;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    //step 1 : storing inorder into an array/vector
    vector<int> inorderArr;
    inorderTraversal(root, inorderArr);

    return inorderToBST(0, inorderArr.size()-1, inorderArr);
}