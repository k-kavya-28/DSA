#include<iostream>

using namespace std;

int main()
{
    //creating 2D array
    int arr[3][4];

    //taking input row-wise
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    //taking input column-wise
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin>>arr[j][i];
        }
    }

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
    
    return 0;
}