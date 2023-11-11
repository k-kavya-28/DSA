#include<iostream>
using namespace std;
int main()
{
    int i = 5;
    int* ptr = &i;
    int** ptr2 = &ptr;

    cout<<"address of i: "<<&i<<endl;
    cout<<"printing ptr: "<<ptr<<endl;
    cout<<"*ptr2: "<<*ptr2<<endl;
    cout<<"address of ptr: "<<&ptr<<endl;
    cout<<"printing ptr2: "<<ptr2<<endl;
    cout<<"value of i using ptr2: "<<i<<*ptr<<**ptr2<<endl;


 return 0;
}