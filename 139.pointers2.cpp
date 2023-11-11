#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2,5,6};
    cout<<"Address of first memory block: "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block: "<<&arr[0]<<endl;
    cout<<"*arr: "<<*arr<<endl;  //value at 0th location
    cout<<"*arr + 1: "<<*arr + 1<<endl;
    cout<<"*(arr) + 1: "<<*(arr) + 1<<endl;   //upar wala same
    cout<<"*(arr + 1): "<<*(arr + 1)<<endl;   //value at 1st location
    cout<<"arr[2]: "<<arr[2]<<endl;
    cout<<"*(arr+2): "<<*(arr+2)<<endl;
    int i = 2;
    cout<<"i[arr]: "<<i[arr]<<endl;
    cout<<"*(i+arr): "<<*(i+arr)<<endl;


 return 0;
}