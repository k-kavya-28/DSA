//using second thing -> stack and not queue unlike previous code where we used newQ

#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    stack<int> s;
    int n = q.size();

    //first half queue ko stack me
    for(int i=0; i<n/2; i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    //stack to queue
    for(int i=0; i<n/2; i++){
        int val = s.top();
        s.pop();
        q.push(val);
    }
    //imp step - queue ke first half ko aage se pop peeche push
    for(int i=0; i<n/2; i++){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    //first half queue ko stack me -> again ditto same
    for(int i=0; i<n/2; i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    for(int i=0; i<n/2; i++){
        int val = s.top();
        s.pop();
        q.push(val);
        val = q.front();
        q.pop();
        q.push(val);
    }
}