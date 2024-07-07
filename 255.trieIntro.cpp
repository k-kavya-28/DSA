#include<iostream>
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

//trie logic is very easy

class Trie{
    public:
        TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){
        //we'll use recursion

        //base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        //assumption , word will be in CAPS
        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root -> children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //RECURSION
        insertUtil(child, word.substr(1));

    }
    
    void insertWord(string word){
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            //iske andr aa gye means sare characters present hain hme jo chahiye
            //now will see next condition jis node pe khade ho
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }

        //RECURSION
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }
};

int main()
{
    Trie* t = new Trie();
    // t->insertWord("abcd");

    // cout<<"abcd Present or not: "<<t->searchWord("abcd")<<endl;
    // cout<<"abcde Present or not: "<<t->searchWord("abcde")<<endl;

    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");

    cout<<"TIME Present or not: "<<t->searchWord("TIME")<<endl;
    cout<<"TIM Present or not: "<<t->searchWord("TIM")<<endl;


 return 0;
}