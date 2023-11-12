//static --> stack memory
//dynamic --> heap memory

#include<iostream>
using namespace std;

int getSum(int* arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    // char ch = 'k';
    // cout<<sizeof(ch)<<endl;
    // char* ptr = &ch;
    // cout<<sizeof(ptr)<<endl;
    // char* ptr2 = new char;
    // cout<<sizeof(ptr2)<<endl;

    int n;
    cin>>n;
    //Array dynamic memory allocation or variable size array
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];    //vvvi arr[i]=*(arr+i)
    }
    int ans = getSum(arr,n);
    cout<<"Sum is: "<<ans<<endl;

    //case 1
    while(true){
        int i=5;
    }
    //though this is infinite loop but at any moment only one integer memory i.e. 4 bytes is consumed inside the loop its consumed and released on loop(stack memory)

    //case 2
    while(true){
        int* p = new int;       //BHAYANKAR ULTRA PRO MAX
    //4realeased 4not released(4+4+4+....so on then memory full and program crashes)
    }
    //here as only stack memory gets released and not the heap memory


 return 0;
}