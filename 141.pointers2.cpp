#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,5};
    cout<<"a:     "<<a<<endl;
    cout<<"&a:    "<< &a <<endl;
    cout<<"&a[0]: "<< &a[0] <<endl;

    int *p = &a[0];
    cout<<"p:  "<<p<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"&p: "<<&p<<endl;


 return 0;
}