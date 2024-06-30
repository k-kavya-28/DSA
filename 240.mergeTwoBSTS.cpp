void inorder(TreeNode* root, vector<int> &in){
    if(root == NULL){
        return;
    }
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

vector<int> mergeArr(vector<int> &a, vector<int> &b){
    int i=0, j=0, k=0;
    vector<int> ans(a.size() + b.size());
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            ans[k++] = a[i];
            i++;
        }
        else{
            ans[k++] = b[j];
            j++;
        }
    }
    while(i<a.size()){
        ans[k++]=a[i++];
    }
    while(j<b.size()){
        ans[k++]=b[j++];
    }
    return ans;
}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    //step1: save bst into inorder
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    //step2: merge two sorted inorders
    vector<int> mergedArray = mergeArr(bst1, bst2);
    return mergedArray;
}