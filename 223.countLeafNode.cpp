void inorder(BinaryTreeNode<int> *root, int &count){
    if(root == NULL){
        return;
    }
    inorder(root->left,count);
    if(root->left == NULL && root->right == NULL){
        count++;
    }
    inorder(root->right,count);
    
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    //kuch ni bas poori tree traverse krli and count update krte gye har leaf node pe
    int cnt = 0;
    inorder(root, cnt);
    return cnt;


}