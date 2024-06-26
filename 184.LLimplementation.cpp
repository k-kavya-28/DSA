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


//Deletion
//deleteNode(pos) we'll see, range is from 1->len
//deleteNode(value) is HW
void deleteNode(Node* &head, int position){
    if(position == 1){
        //deleting first node
        Node* temp = head;
        head = head -> next;
        //memory free, memory heap me allocate krayi thi --- Node* nodeToInsert = new Node(d);, so destructor use krke manually free krani pdegi, i'll have to write destructor also in the class
        temp -> next = NULL;    // delete krne se pehle apne data se pointer hata diya
        delete temp;
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
        prev -> next = curr -> next;
        curr -> next = NULL;    // delete krne se pehle apne data se pointer hata diya
        delete curr;
    }
}
// in deleting last node, tail points to garbage, how to handle this is your HW

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
    //we are keeping tail for our own benefit we are implementing it as if we had to insert at the end, it's though optional but it makes implementations easier
    print(head);
    // insertAtHead(head, 12);
    // print(head);
    // insertAtHead(head, 15);
    // print(head);

    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);

    // insertAtPosition(head,tail,4, 22);
    // print(head);
    cout << "head "<< head->data <<endl;
    cout<< "tail "<<tail-> data <<endl;
    
    // deleteNode(head, 1);
    // print(head);

    deleteNode(head, 3);
    print(head);

    return 0;
}