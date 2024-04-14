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
};

void insertAtHead(Node* &head, int d) {
    //using reference here because we don't want to create any copy
    //creating new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

// isme kuch error hai
// void insertAtPosition(Node* &head,Node* &tail,int pos, int d){
//     if(pos == 1){
//         insertAtHead(head, d);
//         return;
//     }
//     Node* temp = head;
//     int cnt = 1;
//     while(cnt < pos-1){
//         temp = temp ->next;
//         cnt++;
//     }

//     if(temp->next == NULL){
//         insertAtTail(tail, d);
//         return;
//     }

//     //creating new node
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert -> next = temp -> next;
//     temp ->  next = nodeToInsert;

    
// }

void print(Node* &head){
    //using temp because real LL ko nahi chhedna
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}



int main()
{   
    //new node created
    Node* node1 = new Node(10);
    //cout<< node1 -> data <<endl;
    //cout<< node1 -> next <<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1; //tail is just like head also, since till now only one node is there so head and tail are same
    print(head);
    // insertAtHead(head, 12);
    // print(head);
    // insertAtHead(head, 15);
    // print(head);

    // insertAtTail(tail, 12);
    // print(head);
    // insertAtTail(tail, 15);
    // print(head);

    // insertAtPosition(head,tail,4, 22);
    // print(head);
    cout << "head "<< head->data <<endl;
    cout<< "tail "<<tail-> data <<endl;
    return 0;
}