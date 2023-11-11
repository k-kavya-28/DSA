#include<iostream>
using namespace std;


//IN A FUNCTION, ARRAY IS ALWAYS PASSED AS A POINTER , its benefit is that we can send/pass part of array like getSum(arr+3, 5)
//int getSum(int arr[], int n){   //array is not passed but the pointer is passed
int getSum(int *arr, int n){    //same as above
    cout<<"size: "<<sizeof(arr)<<endl;  //will get output even after some error when compiled using g++ command

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[6] = {1,2,3,4,5,8};
    cout<<"sum is : "<<getSum(arr,6)<<endl;
    cout<<"sum of part: "<<getSum(arr+3, 3)<<endl;  //output should be 17, imp use correct size now


 return 0;
}