#include<iostream>
using namespace std;

#define x1 1
#define x2 x1,x1
#define x4 x2,x2
int main()
{
    int array[7]={x1,x2,x4};
    for(int i=0;i<=6;i++){
        cout<<array[i]<<endl;
    }
}