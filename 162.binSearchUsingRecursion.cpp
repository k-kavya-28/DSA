#include<iostream>
using namespace std;

bool isPresent(int arr[], int s, int e, int key){
    //base case
    //element not found
    if(s>e)
        return false;
    int mid = s + (e-s)/2;
    //element found
    if(key==arr[mid])
        return 1;
    
    if(key>arr[mid]){
        return isPresent(arr,mid+1,e,key);
    }
    else{
        return isPresent(arr,s,mid-1,key);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int key = 5;
    int ans = isPresent(arr,0,4,key);
    if(ans){
        cout<<"PRESENT!"<<endl;
    }
    else{
        cout<<"ABSENT!"<<endl;
    }


 return 0;
}