#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool rem = isSorted(arr+1, size-1);
        return rem;
    }
}

int main()
{
    int arr[5] = {1,2,3,6,5};
    bool ans = isSorted(arr, 5);
    if(ans){
        cout<<"SORTED!!"<<endl;
    }
    else{
        cout<<"NOT SORTED!!!!"<<endl;
    }


 return 0;
}