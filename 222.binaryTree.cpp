#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

//in this code we'll see building tree 1)using recursion 2)using level order
node* buildTree(node* root){
    cout<<"enter data: "<<endl;
    int data;
    cin>> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    //using recursion
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

//hmne bana toh liya tree pr dekhne me mazza ni aa rha
void levelOrderTraversal(node* root){
    //levelOrderTraversal is also called BFS
    queue<node *> q;
    q.push(root);
    //separator
    q.push(NULL);


    while(!q.empty()){
        node* temp = q.front();
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


void inorder(node *root){
    //base case
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node *root){
    //base case
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root){
    //base case
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void buildFromLevelOrder(node* &root){
    queue<node *> q;
    cout<<"enter data for root"<<endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }


        cout<<"enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}


int main()
{
    node* root = NULL;
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    /*
    //creating a tree
    root = buildTree(root);

    //i/p string(to build tree) = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Printing the level order traversal output"<<endl;
    levelOrderTraversal(root);

    cout<<"inorder traversal is: ";
    inorder(root);
    cout<<endl<<"preorder traversal is: ";
    preorder(root);
    cout<<endl<<"postorder traversal is: ";
    postorder(root);
    */


 return 0;
}