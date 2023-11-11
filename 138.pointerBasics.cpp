#include<iostream>
using namespace std;
int main()
{
    //int *p; //pointing to any garbage address
    //cout<<*p<<endl;
    //bad practice , always use null pointer instead

    int *p=0;
    //it will give segmentation fault means no such memory exist

    int i=2;
    p = &i;
    //or int *p = 0;
    //   p=&i;
    // both are same

    //copying pointer
    int *q = p;
    cout<<p <<"-"<<q<<endl;
    cout<<*p <<"-"<<*q<<endl;

    //pointer arithmetic - IMPORTANT
    cout<<"pointer arithmetic"<<endl;
    int j = 3;
    int *k = &j;
    cout<<k<<endl;
    k=k+1;  //4 bytes badh jaega
    cout<<k<<endl;

 return 0;
}