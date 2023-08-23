#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("a");
    s.push("b");
    s.push("c");

    cout<<"size before pop->"<<s.size()<<endl;
    cout<<"Top element->"<<s.top()<<endl;
    

    s.pop();
    cout<<"size after pop->"<<s.size()<<endl;
    cout<<"Top element->"<<s.top()<<endl;

    cout<<"empty or not->"<<s.empty()<<endl;
    
    return 0;
}