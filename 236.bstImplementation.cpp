#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node* root){
    //levelOrderTraversal is also called BFS
    queue<Node *> q;
    q.push(root);
    //separator
    q.push(NULL);


    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //purana level complete traverse ho chuka h 
            cout<<endl;
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<< temp->data <<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }


}

void inorder(Node *root){
    //base case
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node *root){
    //base case
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root){
    //base case
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* insertIntoBST(Node* root, int d){
    //base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d < root->data){
        //left part me insert krna hai so left ki recursive call
        root->left = insertIntoBST(root->left, d);
    }
    else{
        //right part me insert krna hai so right ki recursive call
        root->right = insertIntoBST(root->right, d);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

int main()
{
    Node* root = NULL;
    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);

    cout<<"Printing the BST: "<<endl;
    levelOrderTraversal(root);

    cout<<"Printing inorder traversal: ";
    inorder(root);

    cout<<endl<<"Printing preorder traversal: ";
    preorder(root);

    cout<<endl<<"Printing postorder traversal: ";
    postorder(root);

 return 0;
}

//10 8 21 7 27 5 4 3 -1