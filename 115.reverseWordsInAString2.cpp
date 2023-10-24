//given a character array 'a', reverse the order of the words
//word: non-space character, words in 'a' are separated by a single space
//solve problem in-place, without allocating extra space.
//check 22. vdo on playlist or leetcode 186.medium qn
//the array has only characters("k","h") and whitespaces(" ")
//i/p-> My name is khushi
//o/p-> yM eman si ihsuhk

//Hint :
    //word/string create krte jao character uthake and jse hi u meet
    //" "space - reverse the word
    //"\0"null character in last word - reverse the word

#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
        void reverseWords(vector<char>& s){
            int st=0;
            int e=s.size();
            while(st<e){
                swap(s[st],s[e]);
                st++;
                e--;
            }
            return s;
        }

        void solutionfun(vector<char>& str){
            vector<char> temp2;
            for(int i=0; i<str.size();i++){
                vector<char> temp;
                vector<char> rev;
                temp.push_back(str[i]);
                if(str[i]=='\0' || str[i]==' '){
                    rev = reverseWords(temp);
                }
                temp2.push_back(rev);
            }
        }
};

int main()
{
    vector<char> strg = {'h', 'e', 'l', 'l', 'o', ' ', 'b', 'u', 'd'};
    Solution sol;
    sol.solutionfun(strg);
    for(char c : strg){
        cout<<c;
    }  
    cout<<endl;
    return 0;
}