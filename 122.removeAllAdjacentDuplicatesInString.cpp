class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        while(i<s.length()-2){
             if(s[i]==s[i+1]){
                s.erase(i,2);
                i=max(i-1,0);
            }
            else{
                i++;
            }
        }
        return s;
    }
};