#include<iostream>
using namespace std;

class Stack{
    //properties
    public:
        int *arr;
        int top;
        int size;
    
    //behaviour
    //constructor
    Stack(int size){
        this -> size = size;    //initialising line 9 variable size
        top = -1;
        arr = new int[size];    //allocating memory dynamically
    }
    
    //functions
    void push(int element){
        //have to check is place is empty or not
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow!!"<<endl;
        }
    }
    
    void pop(){
        //check if element present or not
        if(top >= 0 ){
            top--;
        }
        else{
            cout<<"stack underflow!!"<<endl;
        }
    }
    
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"stack is empty!!"<<endl;
            return -1;
        }
    }
    
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    //all done in O(1)
};

int main()
{
    Stack st(5);
    st.push(11);
    st.push(12);
    st.push(13);
    // st.push(11);
    // st.push(12);
    // st.push(13);
    cout<<"stack top element is: "<<st.peek()<<endl;
    st.pop();
    cout<<"stack top element is: "<<st.peek()<<endl;
    st.pop();
    cout<<"stack top element is: "<<st.peek()<<endl;
    st.pop();
    cout<<"stack top element is: "<<st.peek()<<endl;
    if(st.isEmpty()){
        cout<<"stack is empty!"<<endl;
    }
    else{
        cout<<"stack is not empty!"<<endl;
    }
 return 0;
}