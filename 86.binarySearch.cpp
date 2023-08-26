#include<iostream>

using namespace std;

// will return index
int binSearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid = start + (end-start)/2;
    }
    //loop se bahar aa gye means value is not present
    return -1;
}

int main()
{
    int even[6] = {1,2,5,99,100,-2};
    int odd[5] = {4, -9, 55, 20, 5};

    int index = binSearch(even,6,99);
    cout<<"index of 99 -> "<<index<<endl;

    int index2 = binSearch(odd,5,100);
    cout<<"index of 100 -> "<<index2<<endl;
    
    return 0;
}