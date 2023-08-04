// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Enter a number:"<<endl;
//     cin>>a;
//     if(a>0) {
//         cout<<"a is positive"<<endl;
//     }
//     else {
//         if(a<0){
//             cout<<"a is negative"<<endl;
//         }
//         else {
//             cout<<"a is zero"<<endl;
//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter number: "<<endl;
    cin>>a;
    if(a>0){
        cout<<"positive"<<endl;
    }
    else if(a<0){
        cout<<"negative"<<endl;
    }
    else {
        cout<<"zero"<<endl;
    }
    return 0;
}