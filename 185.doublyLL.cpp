#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* curr;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

int main()
{
    Node* node1 = new Node(10);

    return 0;
}