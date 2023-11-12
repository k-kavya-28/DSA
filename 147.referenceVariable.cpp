#include<iostream>
using namespace std;

int& func1(int a){
    int num = a;
    int& ans = num;
    return ans;
}

int* func2(int n){
    int* ptr = &n;
    return ptr;
}

void update1(int n){     //pass by value, only a copy is created i.e. a new n
    n++;
}

void update2(int& m){
    m++;
}

int main()
{
    // int i = 5;
    // int& j = i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;

    int n = 5;
    cout<<"before: "<<n<<endl;
    update1(n);
    cout<<"after: "<<n<<endl;

    int& m = n;
    cout<<"before: "<<n<<endl;
    update2(m);
    cout<<"after: "<<n<<endl;

    func1(n);    //should give error due to reference variable scope error .... BAD PRACTICE.. mine is not working
    func2(n);


 return 0;
}