#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }
    
    //destructor
    ~Node(){
        int value = this-> data;
        //memory free
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    if(tail==NULL){
        //empty list
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list
        Node* curr = tail; //head toh hai nahi
        while(curr->data != element){
            curr = curr->next;
        }
        //element is found by now and curr is representing that node
        Node* temp = new Node(d);
        temp->next = curr->next;    //ye line pehle likhni hai
        curr->next = temp;          //ye line second me likhni hai
    }
}

void print(Node* &tail){
    //handling empty list
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail == NULL){
        cout<<"List is empty! Please check again"<<endl;
        return;
    }
    else{
        //non-empty list
        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        //1 node linked list
        if(curr == prev){
            tail = NULL;
        }
        //>=2 node linked list
        else if(tail == curr){
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

bool isCircularList(Node* &head){
    //head pass kro ya tail same hi baat hai
    if(head == NULL){
        return true;
    }
    
    //=1 and >1 node wala case is same only, you can dry run and see overlapping
    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp == head){
        return true;
    }
    return false;
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp]=true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node* tail = NULL;
    //5 element will be searched but hai hi ni toh doesn't matter, it'll insert as per the code
    insertNode(tail, 5, 3);  
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    // insertNode(tail, 5, 7);
    // print(tail);
    // insertNode(tail, 7, 9);
    // print(tail);
    // insertNode(tail, 5, 6);
    // print(tail);
    // insertNode(tail, 9, 10);
    // print(tail);
    // insertNode(tail, 3, 4);
    // print(tail);

    //deleteNode(tail, 3);
    //print(tail);
    
    if(isCircularList(tail)){
        cout<<"Circular"<<endl;
    }
    else{
        cout<<"Not circular"<<endl;
    }
    return 0;
}

//TC -> O(n) as we are traversing all node once
//SC -> O(1) as we are just making variables