class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        vector<int> ans;
    	if(root == NULL){
    	    return ans;
    	}
    	
    	queue<Node*> q;
    	q.push(root);
    	bool leftToRight = true;
    	
    	while(!q.empty()){
    	    int size = q.size();
    	    vector<int> temp(size);
    	    
    	    //level process
    	    for(int i=0; i<size; i++){
    	        Node* frontNode = q.front();
    	        q.pop();
    	        //normal insert or reverse insert
    	        int index = leftToRight? i : size-i-1;
    	        temp[index] = frontNode ->data;
    	        if(frontNode->left){
    	            q.push(frontNode->left);
    	        }
    	        if(frontNode->right){
    	            q.push(frontNode->right);
    	        }
    	    }
    	    
    	    //direction change
    	    leftToRight = !leftToRight;
    	    for(auto i: temp){
    	        ans.push_back(i);
    	    }
    	}
    	return ans;
    }
};