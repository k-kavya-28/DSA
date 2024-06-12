//using newQueue
class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int> ans;
        queue<int> newQ;
        int n = q.size();
        for(int i=0; i<n/2; i++){
            int val = q.front();
            q.pop();
            newQ.push(val);
        }
        for(int i=0; i<n/2; i++){
            int val = newQ.front();
            newQ.pop();
            ans.push_back(val);
            val = q.front();
            q.pop();
            ans.push_back(val);
        }
        
        return ans;
    }
};