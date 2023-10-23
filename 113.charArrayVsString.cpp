#include<iostream>

using namespace std;

int main()
{
    char name[20]="khushi";
    name[2]='\0';
    cout<<name<<endl;

    string s="kav\0ya\0";
    //check
    cout<<s<<endl;

    
    return 0;
}