int minValue(TreeNode* root){
    TreeNode* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp->data;
}

int maxValue(TreeNode* root){
    TreeNode* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp->data;
}

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    int pred = -1;
    int succ = -1;

    TreeNode* temp = root;
    while (temp != NULL) {
        if (temp->data == key) {
            break;
        } else if (temp->data > key) {
            succ = temp->data;
            temp = temp->left;
        } else {
            pred = temp->data;
            temp = temp->right;
        }
    }
    //at this point temp is at the key
    if (temp == NULL) {
        // Key not found in the tree
        return {pred, succ};
    }

    if (temp->left != NULL) {
        pred = maxValue(temp->left);
    }

    // If the key has a right child, find the minimum value in the right subtree
    if (temp->right != NULL) {
        succ = minValue(temp->right);
    }

    return {pred, succ};

}