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
    int *p = &i;
    //or int *p = 0;
    //   p=&i;
    // both are same

 return 0;
}