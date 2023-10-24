class Solution {
private:
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }
    char toLower(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }
        else{
            char temp = ch-'A'+'a';
            return temp;
        }
    }
    bool checkPalindrome(string a){
        int st=0;
        int e=a.length()-1;
        while(st<=e){
            if(a[st]!=a[e]){
                return 0;
            }
            else{
                st++;
                e--;    
            }
        }

    return 1;
    }

public:
    bool isPalindrome(string s) {
        string temp="";
        //faltu character removing
        for(int j=0; j<s.length(); j++){
            if (valid(s[j])){
                temp.push_back(s[j]);
            }
        }

        //toLower
        for(int j=0; j<temp.length(); j++){
            temp[j]=toLower(temp[j]);
            }
        //checking palindrome
        return checkPalindrome(temp);
    }
};