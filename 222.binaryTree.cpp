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

int main()
{
    node* root = NULL;
    //creating a tree
    root = buildTree(root);

    //i/p string(to build tree) = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Printing the level order traversal output"<<endl;
    levelOrderTraversal(root);


 return 0;
}