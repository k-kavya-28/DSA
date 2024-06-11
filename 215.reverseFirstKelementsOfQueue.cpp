class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int> s;
        //step1 k elements from Q to Stack
        for(int i=0; i<k; i++){
            int val = q.front();
            q.pop();
            s.push(val);
        }
        //step2 k elements from stack to Q
        while(!s.empty()){
            int val = s.top();
            s.pop();
            q.push(val);
        }
        //45321
        //32145
        int t = q.size()-k;
        for(int i=0; i<t; i++){
            int val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }
};