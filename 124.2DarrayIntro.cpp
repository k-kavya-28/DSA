#include<iostream>

using namespace std;

bool isPresent(int arr[][4], int row, int col, int target){
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(target==arr[i][j]){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    //creating 2D array
    int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //taking input row-wise
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    //taking input column-wise
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr[j][i];
    //     }
    // }

    //taking input row-wise
    // for(int row=0; row<3; row++){
    //     for(int col=0; col<4; col++){
    //         cin>>arr[row][col];
    //     }
    // }

    //taking input column-wise
    // for(int col=0; col<4; col++){
    //     for(int row=0; row<3; row++){
    //         cin>>arr[row][col];
    //     }
    // }

    //print
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //searching a target element
    cout<<"Enter target element to be searched: "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr, 3, 4, target)){
        cout<<"Element present"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    
    return 0;
}

//COMPLEXITY--> O(row*col), O(m*n), O(n^2)