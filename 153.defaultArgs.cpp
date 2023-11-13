#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 0){
    for(int i=start; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//default argument means making the start parameter optional i.e. if na pta ho toh poora array print krdo
//void print(int arr[], int n=0, int start){       this is invalid as rightmost first
int main()
{
    int arr[5] = {1,2,3,4,5};
    print(arr,5);   //start ki value ni di
    print(arr,5,2);



 return 0;
}