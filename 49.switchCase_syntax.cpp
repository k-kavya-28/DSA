#include<iostream>
using namespace std;
int main()
{
    // int num=2;
    // switch (num) {
    //     case 1 : cout<<"First"<<endl;
    //             break;
    //     case 2 : cout<<"Second"<<endl;
    //             break;
    //     default : cout<<"Default"<<endl;
    //             break;
    // }


    // char ch ='1';
    // switch (ch) {
    //     case 1 : cout<<"First"<<endl;
    //             break;
    //     case '1' : cout<<"Character one"<<endl;
    //             break;
    //     default : cout<<"Default"<<endl;
    //             break;
    // }


    char ch ='1';
    int num=1;
    switch (ch) {
        case 1 : cout<<"First"<<endl;
                cout<<"First again"<<endl;
                break;
        case '1' :  switch (num) {
                        case 1: cout<<"The value of num is: "<<num<<endl;
                        break;
                    }
                break;
        default : cout<<"Default"<<endl;
                break;
    }
}