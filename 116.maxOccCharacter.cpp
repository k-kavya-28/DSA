#include<iostream>

using namespace std;

char getMaxOccChar(string s){

    int arr[26];            //Space Comp -> O(1),constant
    //create an array of count of numbers
    for(int i=0; i<s.length(); i++){        //O(n) also SC.->O(n)
        char ch=s[i];
        int number=0;
        //lowercase
        if(ch>='a' && ch<='z'){
            number=ch-'a';
        }
        //uppercase
        else{
            number=ch-'A';
        }
        arr[number]++;

    }

    int maxi=-1;
    int ans;
    for(int i=0; i<26; i++){            //O(1)
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    char finalans='a'+ans;

    return finalans;
}

int main()
{
    string s;
    cin>>s;
    char maxOC = getMaxOccChar(s);
    cout<<maxOC<<endl;
    
    return 0;
}