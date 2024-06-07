class Solution 
{
    private:
    bool knows(vector<vector<int> >& M, int n, int a, int b){
        if(M[a][b] == 1){
            return true;
        }
        else{
            return false;
        }
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        
        //step1 push all elements on the stack
        for(int i=0; i<n; i++){
            s.push(i);
        }
        
        //step2 : get 2 elements and compare them
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,n,a,b)){
                s.push(b);  //discard a 
            }
            else{
                s.push(a);  //discard b
            }
        }
        
        //step 3 : single element is left in the stack which is potential celebrity so we veerify it
        
        int candidate = s.top();
        
        bool rowCheck = false;
        int zeroCount = 0;
        for(int i=0; i<n; i++){
            if(M[candidate][i] == 0){
                zeroCount++;
            }
        }
        if(zeroCount == n){
            rowCheck = true;
        }
        
        bool colCheck = false;
        int oneCount = 0;
        for(int i=0; i<n; i++){
            if(M[i][candidate] == 1){
                oneCount++;
            }
        }
        if(oneCount == n-1){
            //n-1 isliye coz we are seeing except diagonal elements
            colCheck = true;
        }
        
        
        if(rowCheck && colCheck){
            return candidate;
        }
        else{
            return -1;
        }
    }
};