#include<iostream>
using namespace std;

int merge(int* arr, int s, int e){
    int inv_count = 0;
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
            inv_count += len1-i;
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

    return inv_count;
}

int mergeSort(int* arr, int s, int e){
    int inv_count=0;
    //base case
    if(s>=e){              //means if 0 element or 1 element then it's already sorted
        return 0;
    }

    int mid = s + (e-s)/2;
    
    //left part sorting
    inv_count += mergeSort(arr, s, mid);

    //right part sorting
    inv_count += mergeSort(arr, mid+1, e);

    //merge
    inv_count += merge(arr,s,e);

    return inv_count;

}

int main()
{
    int arr[8]={3,5,6,9,1,2,7,8};
    int n = 8;
    int ans = mergeSort(arr, 0, n-1);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    cout<<"INVERSION COUNT: "<<ans<<endl;


 return 0;
}