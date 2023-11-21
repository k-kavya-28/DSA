#include<iostream>
using namespace std;

void merge(int* arr, int s, int e){
    int mid = s + (e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int k=s;
    for(int i=0; i<len1; i++){
        arr1[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0; i<len2; i++){
        arr2[i]=arr[k++];
    }

    //merging using merge sort concept i.e. merge 2 sorted arrays
    int i=0;
    int j=0;

    k=s;
    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            arr[k++]=arr1[i++];
        }
        else{
            arr[k++]=arr2[j++];
        }
    }

    while(i<len1){
        arr[k++]=arr1[i++];
    }
    while(j<len2){
        arr[k++]=arr2[j++];
    }
    delete []arr1;
    delete []arr2;

}

void mergeSort(int* arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }

    int mid = s + (e-s)/2;
    
    //left part sorting
    mergeSort(arr, s, mid);

    //right part sorting
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr,s,e);

}

int main()
{
    int arr[5]={2,23,9,81,100};
    int n = 5;
    mergeSort(arr, 0, n-1);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<"  ";
    }


 return 0;
}