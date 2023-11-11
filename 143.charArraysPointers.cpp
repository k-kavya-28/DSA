#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a = sqrt(9);    //cmath is used vviiii
    //difference between int array and char array in pointers
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "defgh";

    cout<< arr <<endl;  //prints address
    cout<< ch <<endl;   //prints the complete string
    //cout function is differently implemented , chala ke dekho

    //int *c = &ch[0];    //IMP gives error as pointer has to be of the same type
    char *c = &ch[0];
    cout<<"printing c: "<<c<<endl;  //prints the entire string till null character ATTENTION

    char temp = 'k';
    char *tempptr = &temp;
    cout<<"tempptr: "<<tempptr<<endl;

 return 0;
}