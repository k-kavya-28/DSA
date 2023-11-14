#include<iostream>
using namespace std;

int sum(int arr[], int size){
    //base
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int ans = arr[0] + sum(arr+1, size-1);
    return ans;
}

int main()
{
    int arr[5] = {3,2,5,1,6};
    int ans = sum(arr, 5);
    cout<<"Sum is: "<<ans<<endl;


 return 0;
}