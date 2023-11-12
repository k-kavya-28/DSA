#include<iostream>
using namespace std;

void update(int** ptr2){     //double pointer is passed
    //ptr2 = ptr2+1;
    //kuch change hoga ?
    //no

    //*ptr2 = *ptr2+1;
    //kuch change hoga ?
    //yes

    **ptr2 = **ptr2+1;
    //kuch change hoga ?
    //yes
}

int main()
{
    int i = 5;
    int* ptr = &i;
    int** ptr2 = &ptr;

    // cout<<"address of i: "<<&i<<endl;
    // cout<<"printing ptr: "<<ptr<<endl;
    // cout<<"*ptr2: "<<*ptr2<<endl;
    // cout<<"address of ptr: "<<&ptr<<endl;
    // cout<<"printing ptr2: "<<ptr2<<endl;
    // cout<<"value of i using ptr2: "<<i<<*ptr<<**ptr2<<endl;

    cout<<"before: "<<i<<endl;
    cout<<"before: "<<ptr<<endl;
    cout<<"before: "<<ptr2<<endl;
    update(ptr2);
    cout<<"before: "<<i<<endl;
    cout<<"before: "<<ptr<<endl;
    cout<<"before: "<<ptr2<<endl;


 return 0;
}