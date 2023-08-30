#include<iostream>

using namespace std;

int getPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main()
{
    int arr[6]={7,8,9,1,2,3};
    cout<<"Pivot elements index is -> "<<getPivot(arr,6)<<endl;
    
    return 0;
}