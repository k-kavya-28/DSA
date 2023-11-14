#include<iostream>
using namespace std;

void print(string& str){
    for(int i=0; i<str.length(); i++){
        cout<<str[i];
    }
}

void rev(string& str, int i, int j){
    //base
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    rev(str,i, j);
}

int main()
{
    string str = "abcde";
    rev(str, 0, str.length()-1);
    print(str);
    // cout<<str<<endl;     both works


 return 0;
}