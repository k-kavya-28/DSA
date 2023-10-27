#include<iostream>
#include<climits>

using namespace std;

//to print row-wise sum
void printSum(int arr[][4], int m, int n){
    cout<<"Printing sum row-wise ->"<<endl;
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}

//to print col-wise sum
void printSumCol(int arr[][4], int m, int n){
    cout<<"Printing sum col-wise ->"<<endl;
    for(int i=0; i<4; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }
}

//largest row sum
int largestRowSum(int arr[][4], int m, int n){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            sum+=arr[i][j];
        }
        // maxi=max(maxi,sum);
        // or
        if(sum>maxi){
            maxi=sum;  
            rowIndex = i; //m is row, can use row,col for i,j  
        }
    }

    cout<<"Maximum sum is: "<<maxi<<endl;
    return rowIndex;
}

int main()
{
    int arr[3][4];
    cout<<"Enter array: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the array: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printSum(arr, 3, 4);
    cout<<endl;

    // printSumCol(arr, 3, 4);
    // cout<<endl;

    int rowind = largestRowSum(arr, 3, 4);
    cout<<"At index: "<<rowind<<endl;
    
    return 0;
}