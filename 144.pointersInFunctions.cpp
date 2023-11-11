#include<iostream>
using namespace std;

void print(int *p){
    cout<< p <<endl;
}

//pass by value in pointer
void update(int *p){
    //p=p+1;    //invalid
    // cout<<"p inside update function: "<<p<<endl;     //updates inside only
    //though we can update the value
    *p = *p + 1;
}

int main()
{
    int value = 5;
    int *p = &value;
    // print(p);
    cout<<"before: "<<*p<<endl;
    update(p);
    // print(p);
    cout<<"after: "<<*p<<endl;


 return 0;
}