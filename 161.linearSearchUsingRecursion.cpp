#include<iostream>
using namespace std;

bool isPresent(int arr[], int size, int key){
    //base
    if(size==0){
        return 0;
    }
    if(size==1){    //ye if ki zarurat ni thi direct check kr skte the arr[0]
        if(key == arr[0]){
            return true;
        }
    }
    bool rem = isPresent(arr+1,size-1,key);
    return rem;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int key = 6;
    cout<<"Present: "<<isPresent(arr,5,key)<<endl;


 return 0;
}