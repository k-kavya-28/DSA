class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int> s;
        
        //step 1 queue se stack
        while(!q.empty()){
            int element = q.front();
            q.pop();
            s.push(element);
        }
        
        //step 2 stack se queue, stack has reversal property
        while(!s.empty()){
            int element = s.top();
            s.pop();
            q.push(element);
        }
        
        return q;
    }
};