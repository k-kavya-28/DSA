class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        int childCount;
        bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        childCount = 0;
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;

    Trie(char ch){
        root = new TrieNode(ch);
    }

    void insertUtil(TrieNode* root, string word){
        //we'll use recursion

        //base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        //assumption , word will be in CAPS
        int index = word[0] - 'a';
        TrieNode* child;

        //present
        if(root -> children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            child = new TrieNode(word[0]);
            root->childCount++;
            root->children[index] = child;
        }

        //RECURSION
        insertUtil(child, word.substr(1));

    }
    
    void insertWord(string word){
        insertUtil(root, word);
    }

    void lcp(string first, string &ans){
        for(int i=0; i<first.length(); i++){
            char ch = first[i];

            if(root->childCount == 1){
                ans.push_back(ch);
                //aage badho
                int index = ch - 'a';
                root = root->children[index];
            }
            else{
                break;  //bhaag jao
            }

            if(root->isTerminal)
                break;
            }
    }
};

string longestCommonPrefix(vector<string> &arr, int n)
{
    Trie* t = new Trie('\0');

    //insert all strings into trie
    for(int i=0; i<n; i++){
        t->insertWord(arr[i]);
    }

    string first = arr[0];
    string ans = "";

    t->lcp(first, ans);
    return ans;
}


