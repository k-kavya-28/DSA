#include<iostream>
using namespace std;
int main()
{
    int num=2;
    switch(num){
        case 1: cout<<num<<endl;
                continue;
        case 2: cout<<num<<endl;
                continue;
    }
    return 0;
}

// gives error as continue can be used only inside loops.