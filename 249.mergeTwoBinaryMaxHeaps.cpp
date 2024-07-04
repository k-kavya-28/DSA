#include <bits/stdc++.h> 

//1-based indexing
void heapify(vector<int> &arr, int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        //means swap ho gya h
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

vector<int> mergeHeap(int n, int m, vector<int> &arr1, vector<int> &arr2) {
    //step1: merge two arrays
    vector<int> ans;
    //ans.push_back(-1);
    for(auto i:arr1)
        ans.push_back(i);
    for(auto i:arr2)
        ans.push_back(i);
    //ek shortcut bhi hota hai net pe padhoge toh mil jaega

    //step2: build heap using merged array
    int size = ans.size();
    for(int i=size/2-1; i>=0; i--){
        heapify(ans, size, i);
    }

    return ans;
    
}