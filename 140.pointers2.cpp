#include<iostream>
using namespace std;
int main()
{
   int arr[10];
   cout<<"sizeof(arr): "<<sizeof(arr)<<endl;
    cout<<"sizeof(*arr): "<<sizeof(*arr)<<endl;
    cout<<"sizeof(&arr): "<<sizeof(&arr)<<endl;

   int *ptr = &arr[0];
   cout<<"sizeof(ptr): "<<sizeof(ptr)<<endl;
   cout<<"sizeof(*ptr): "<<sizeof(*ptr)<<endl;
   cout<<"sizeof(&ptr): "<<sizeof(&ptr)<<endl;


 return 0;
}