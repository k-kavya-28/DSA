#include<iostream>
using namespace std;
int main()
{
    //int *p; //pointing to any garbage address
    //cout<<*p<<endl;
    //bad practice , always use null pointer instead

    int *p=0;
    //it will give segmentation fault means no such memory exist



 return 0;
}