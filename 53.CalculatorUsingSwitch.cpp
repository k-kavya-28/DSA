#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter a,b: "<<endl;
    cin>>a>>b;

    cout<<"Enter operation(+,-,*,/,%): "<<endl;
    cin>>op;

    switch(op){
        case '+': cout<<"Sum is: "<<a+b<<endl;
        break;
        case '-': cout<<"Diff is: "<<a-b<<endl;
        break;
        case '*': cout<<"Mul is: "<<a*b<<endl;
        break;
        case '/': cout<<"Div is: "<<a/b<<endl;
        break;
        case '%': cout<<"Rem is: "<<a%b<<endl;
        break;
        default : cout<<"INVALID OPERATION"<<endl;
    }
    return 0;
}