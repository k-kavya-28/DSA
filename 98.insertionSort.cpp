#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    
    for(int i=1; i<n; i++){
        int j=i-1;
        int temp = arr[i];
        for(;j>=0;j--){
            if(arr[j]>temp){ //shift
                arr[j+1]=arr[j];
            }
            else{ //ruk jao
                break;
            }
        }
        arr[j+1]=temp;
    }
}