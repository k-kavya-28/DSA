#include<iostream>
using namespace std;

bool isPresent(int arr[], int n, int key){
    for (int i=0; i<n; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5]={1,9,-2,10,7};
    int key;
    cout<<"Enter key: "<<endl;
    cin>>key;
    if(isPresent(arr,5,key)){
        cout<<"Key present"<<endl;
    }
    else {
        cout<<"Key not present"<<endl;
    }
    return 0;
}