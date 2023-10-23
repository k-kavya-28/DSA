char toLower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    // Write your code here.
    int st=0;
    int e=s.size()-1;
    while(st<e){
        if(toLower(s[st])!=toLower(s[e])){
            return 0;
        }
        else if (s[st]=='\0' || s[st]=='\n' || s[st]=='\t'){
             st++;
        }
        else if (s[e]=='\0' || s[e]=='\n' || s[e]=='\t'){
             e--;
        }
        else{
            st++;
            e--;
        }
    }

    return 1;
}
