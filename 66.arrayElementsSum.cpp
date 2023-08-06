#include<iostream>
using namespace std;

int arraySum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;

    cout<<"Enter "<<n<<" elements: "<<endl;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Sum is: "<<arraySum(arr,n)<<endl;
    return 0;
}