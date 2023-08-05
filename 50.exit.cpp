#include<iostream>
using namespace std;
int main()
{
    int num=2;
    while(true){
        switch(num){
            case 1: cout<<num<<endl;
            exit(0);
            case 2: cout<<num<<endl;
            exit(0);
        }
        cout<<"outside switch and inside while loop"<<endl;
    }
    return 0;
}