#include<iostream>
using namespace std;

void printArray(int array[], int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<endl;
    }
}

int main()
{
    int array[3]={1,2,3};
    printArray(array, 3);
    return 0;
}