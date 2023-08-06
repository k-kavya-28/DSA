#include<iostream>
using namespace std;

void update(int arr[], int n){
    
    cout<<"Inside update"<<endl;

    for (int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    cout<<"End of update function and going to main "<<endl;
}

int main()
{
    int arr[3]={1,2,3};

    update(arr,3);

    cout<<"Printing in main"<<endl;

    for (int i=0; i<3; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}