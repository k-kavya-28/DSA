#include<limits.h>

class SpecialStack {

    stack<int> s;
    int mini = INT_MAX;

    public:
        
    void push(int data) {
        // Implement the push() function.
        //for 1st element
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        //else new minimum mil gya hai 
        else{
            if(data<mini){
                int val = 2*data - mini;
                s.push(val);
                mini = data;
            }
            else{
                s.push(data);
            }
        }
    }

    void pop() {
        if(s.empty()) {
            return;
        }

        int curr = s.top();
        s.pop();

        if(curr < mini) {
            mini = 2 * mini - curr;
        }
    }

    int top() {
        // Implement the top() function.
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        if(curr<mini){
            return mini;
        }
        else{
            return curr;
        }
    }

    int getMin() {
        // Implement the getMin() function.
        if(s.empty()){
            return -1;
        }
        return mini;
    }  
};