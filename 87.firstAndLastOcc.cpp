#include<iostream>

using namespace std;

int firstOcc(int arr[], int size, int key){
    int s=0,e=size-1;
    int mid= s + (e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid= s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int s=0,e=size-1;
    int mid= s + (e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1; //only change btw two functions
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid= s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int even[5]={1,2,3,3,5};
    cout<<"first occurence of 3 -> "<<firstOcc(even,5,3)<<endl;
    cout<<"last occurence of 3 -> "<<lastOcc(even,5,3)<<endl;
    return 0;
}