#include<iostream>
using namespace std;

int partition(int* arr, int s, int e){
    int cnt=0;
    int pivotElement = arr[s];
    for(int i=s; i<=e; i++){
        if(arr[i]<pivotElement){
            cnt++;
        }
    }

    int pivotIndex = s+cnt;
    swap(arr[pivotIndex],arr[s]);

    //left and right part sambhalte hain
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
}

void quickSort(int* arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }

    int p = partition(arr, s, e);

    //left part sorting
    quickSort(arr, s, p-1);

    //right part sort
    quickSort(arr, p+1, e);
}

int main()
{
    int arr[8] = {2,4,1,3,5,100,68,23};
    int n = 8;
    quickSort(arr, 0, n-1);

    //printing sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


 return 0;
}