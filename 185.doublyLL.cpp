#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this-> data;
        //memory free
        if(this->next != NULL){
            delete next;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

//imp - traversal of Linked List(doubly)
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

//getting length of the Linked List
int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int d){
    //empty list ko alag se handle krlo
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* head, Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    if(position == 1){
        insertAtHead(head,tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp ->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(head,tail, d);
        return;
    }

    //creating new node
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp ->  next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(Node* &head,Node* &tail, int position){
    if(position == 1){
        //deleting first node
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp->next;
        temp -> next = NULL;
        delete temp;    //have to write destructor
    }
    else{
        //deleting middle or last node
        Node* curr = head;
        Node* prev = NULL;
        
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    //Node* node1 = new Node(10);   //i.e. if the list is empty
    // Node* head = node1;
    // Node* tail = node1;

    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout<<"Length: "<<getLength(head)<<endl;

    insertAtHead(head,tail, 11);
    print(head);
    cout<<"Length: "<<getLength(head)<<endl;
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    insertAtHead(head,tail, 13);
    print(head);

    insertAtHead(head,tail, 8);
    print(head);

    insertAtTail(head,tail, 20);
    print(head);

    insertAtPosition(head, tail, 2, 100);
    print(head);
    
    insertAtPosition(head, tail, 1, 101);
    print(head);
    
    insertAtPosition(head, tail, 7, 108);
    print(head);
    

    return 0;
}