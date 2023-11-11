#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    //arr = arr + 1;  //will give error not assignable, error in symbol table 
    int *ptr = &arr[0];
    cout<<"ptr: "<<ptr<<endl;
    ptr = ptr + 1;
    cout<<"ptr + 1: "<<ptr + 1<<endl;   //this is not changing address but just incrementing ptr
    // we cannot change value in symbol table
    // address is also not reassignable

 return 0;
}