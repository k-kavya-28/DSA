string FirstNonRepeating(string A){
		    unordered_map<char,int> count;
		    queue<char> q;
		    string ans="";
		    
		    //we just use length for strings and not size
		    for(int i=0; i<A.length(); i++){
		        char ch = A[i];
		        count[ch]++;    //increase count
		        q.push(ch);     //queue me push kra
		        
		        while(!q.empty()){
    		        if(count[q.front()] > 1){   //repeating character
    		            q.pop();
    		        }
    		        else{                       //non-repeating character mil gya
    		            ans.push_back(q.front());
    		            break;
    		        }
		        }
		        
    		    if(q.empty()){
    		        ans.push_back('#');
    		    }
		    }
		    return ans;
		}