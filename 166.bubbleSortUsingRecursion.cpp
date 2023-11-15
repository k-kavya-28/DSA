#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

void bubbleSort(int arr[], int n){
    //base case
    if(n==0||n==1){     //already sorted
        return ;
    }

    //bas ek element ke liye krde baki sab ho jaega
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleSort(arr, n-1);
}

int main()
{
    int arr[5] = {9,6,5,3,1};
    bubbleSort(arr,5);
    print(arr,5);


 return 0;
}