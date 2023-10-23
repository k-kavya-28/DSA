#include<iostream>

using namespace std;

bool checkPalindrome(char ch[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(ch[s]!=ch[e]){
            return 0;
        }
        else{
            s++;
            e--;    
        }
    }

    return 1;
}

int main()
{
    char ch[20]="madam";
    int ans=checkPalindrome(ch,5);
    cout<<ans<<endl;
    
    return 0;
}

//in this case we consider small letter and capital letter different