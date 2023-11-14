#include<iostream>
using namespace std;

bool checkP(string& str, int i, int j){
    //base
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    i++;
    j--;
    checkP(str, i+1, j-1);
}

int main()
{
    string str = "abhbba";
    bool ans = checkP(str, 0, str.length()-1);
    if(ans){
        cout<<"IT'S A PALINDROME!"<<endl;
    }
    else{
        cout<<"NOT A PALINDROME!"<<endl;   
    }


 return 0;
}