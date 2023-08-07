#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int n){
    int first=0;
    int second=1;
    while(second<=n-1){
        swap(arr[first],arr[second]);
        first+=2;
        second+=2;
    }
}

int main()
{
    int arr[6]={1,2,-9,10,30,0};
    int brr[5]={1,2,8,0,-7};

    swapAlternate(arr,6);
    swapAlternate(brr,5);

    printArray(arr,6);
    printArray(brr,5);

    return 0;
}