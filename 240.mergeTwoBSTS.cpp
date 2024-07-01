/*************************************************************

    Following is the Binary Tree node structure:

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/
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

//Function to convert BST to DLL vvvvi
//if tree hota toh DLL
//BST h toh sorted DLL
void convertIntoSortedDLL(TreeNode<int>* root, TreeNode<int>* &head){
    //base case
    if(root == NULL){
        return NULL;
    }
    //right call
    //Q.why are we doing right part ? prev lectures dekhe hain hmne flatten a binary tree into LL
    convertIntoSortedDLL(root->right, head);
    root->right = head;
    if(head!=NULL){
        head->left = root;
    }
    head = root;
    convertIntoSortedDLL(root->left, head);
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