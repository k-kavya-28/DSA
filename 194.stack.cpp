#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"topmost element is: "<<s.top()<<endl;
    
    if(s.empty()){
        cout<<"stack is empty!!"<<endl;
    }
    else{
        cout<<"stack is not empty!!"<<endl;
    }
 return 0;
}