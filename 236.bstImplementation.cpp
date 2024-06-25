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

Node* minValue(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

//assumption is ki value mujhe mil hi jaegi 
Node* deleteFromBST(Node* root, int val){
    if(root == NULL){
        return root;
    }
    if(root->data == val){
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //1 child
        //left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left != NULL && root->right != NULL){
            //this is the most important part
            int mini = minValue(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
    else if(root->data > val){
        //left part me jana hai
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        //right part me jana hai
        root->right = deleteFromBST(root->right, val);
        return root;
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


    cout<<endl<<"Min value is: "<<minValue(root)->data<<endl;
    cout<<"Max value is: "<<maxValue(root)->data<<endl; 


    //DELETION
    root = deleteFromBST(root, 27);

    cout<<"Printing the BST: "<<endl;
    levelOrderTraversal(root);

    cout<<"Printing inorder traversal: ";
    inorder(root);

    cout<<endl<<"Printing preorder traversal: ";
    preorder(root);

    cout<<endl<<"Printing postorder traversal: ";
    postorder(root);


    cout<<endl<<"Min value is: "<<minValue(root)->data<<endl;
    cout<<"Max value is: "<<maxValue(root)->data<<endl;

    

 return 0;
}

//10 8 21 7 27 5 4 3 -1