#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character"<<endl;
    cin>>ch;
    if (ch >= 'a' && ch<= 'z') {
        cout<<"lowercase"<<endl;
    }
    else if (ch>='A' && ch<='Z') {
        cout<<"uppercase"<<endl;
    }
    else if (ch>='0' && ch<='9') {
        cout<<"numeric"<<endl;
    }
    else {
        cout<<"INVALID CHARACTER"<<endl;
    }
    return 0;
}