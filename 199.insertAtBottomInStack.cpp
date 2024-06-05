#include <bits/stdc++.h> 

void solve(stack<int>& s, int x){
    //we have to use the same stack
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }

    //side me rkho number
    int num = s.top();
    s.pop();

    //recursive call
    solve(s,x);

    //bachi cheez daal rhe hain
    s.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack, x);
    return myStack;
}
