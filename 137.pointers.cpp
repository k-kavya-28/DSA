#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    cout <<"Address of num is: "<<&num<<endl;
    int *ptr = &num;
    cout<<"value: "<<*ptr<<endl;
    cout<<"address: "<<ptr<<endl;

    cout<<"size of integer is: "<<sizeof(num)<<endl;
    cout<<"size of pointer is: "<<sizeof(ptr)<<endl;    //same irrespective of the type of pointer
    return 0;
}