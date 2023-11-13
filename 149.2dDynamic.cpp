#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // int** arr = new int*[n];
    // for(int i=0; i<n; i++){
    //     arr[i]= new int[n];
    // }
    // //2d array creation done

    // //taking input
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // //printing 2d array
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    

    //FOR DIFFERENT m AND n
    int row;
    cin>>row;
    int col;
    cin>>col;
    int** arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i]= new int[col];
    }
    //2d array creation done

    //taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    //printing 2d array
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //IMPORTANT STEP AFTER WORK DONE IN HEAP MEMORY
    //release memory
    //VVVII
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete []arr;

 return 0;
}