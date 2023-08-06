#include<iostream>
#include<climits>
using namespace std;

int getMin(int array[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    return min;
}

int getMax(int array[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}

int main()
{
    int size;
    cout<<"enter size of array: "<<endl;
    cin>>size;

    cout <<"enter "<< size<< " elements: "<<endl;

    int num[100];
    for (int i=0; i<size; i++){
        cin>>num[i];
    }

    cout <<"Minumum element in the array is: "<<getMin(num,size)<<endl;
    cout <<"Maximum element in the array is: "<<getMax(num,size)<<endl;

    return 0;
}