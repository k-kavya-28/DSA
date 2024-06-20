Node* solve(Node *root, int &k, int node){
    //base case 
    if(root == NULL){
        return NULL;
    }
    if(root->data == node){
        return root;
    }
    
    Node* leftAns = solve(root->left, k, node);
    Node* rightAns = solve(root->right, k, node);
    
    //wapis aa gye
    if(leftAns != NULL && rightAns == NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            //locking the answer
            return root;
        }
        return leftAns;
    }
    if(leftAns == NULL && rightAns != NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            //locking the answer
            return root;
        }
        return rightAns;
    }
    //if dono me se kuch ni hua
    return NULL;
}

int kthAncestor(Node *root, int k, int node)
{
    Node* ans = solve(root, k, node);
    if(ans == NULL || ans->data == node){
        return -1;
    }
    else{
        return ans->data;
    }
}